// // Smallest Range From K Sorted List
// // https://www.codingninjas.com/codestudio/problems/smallest-range-from-k-sorted-list_1069356?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
// // Problem Statement
// // You are given 'K' lists containing non-negative integers.
// // Each list has a size 'N' and is sorted in non-decreasing order. 
// // You need to find the minimum length of a range such that at least 
// // one element of each list must be included in that range.

// // For example:
// // Sample Input 1 :
// // 2
// // 3 2
// // 2 4 5
// // 5 6 7
// // 2 3
// // 1 1
// // 9 12
// // 4 9
// // Sample Output 1 :
// // 1
// // 9
// // Explanation For Sample Input 1 :
// // Test case 1 :
// // The given list are [2, 4, 5], [5, 6, 7]. The range [5, 5] will include 5 which is present in both the list and hence the length of this range is 1. This is the only possible range having the minimum length.

// // Test case 2 :
// // The given list are [1, 1], [9, 12], [4, 9]. The range [1, 9] will include 1 which is present in the first list, and 9 which include in both the second and third list  The length of the range is 9 (9 - 1 + 1 = 9).
// // Sample Input 2 :
// // 2
// // 3 3
// // 4 7 30
// // 1 2 12
// // 20 40 50
// // 5 1
// // 3 6 8 12 31
// // Sample Output 2 :
// // 14
// // 1
// // Explanation For Sample Input 2 :
// // Test case 1 :
// // The given list are [4, 7, 30], [1, 2, 12] and [20, 40, 50]. The range [7, 20], hence the length of this range is 14. This is the only possible range having the minimum length.

// // Test case 2 :
// // The range [3, 3] will include 3 which is present in the first list. The length of the range is 1. Infect, we can select any of element present in first list as there is only one list given to us.


// #include<limits.h>
// #include<queue>

// class node{
//     public:
//     int data;
//     int row;
//     int col;
//     node(int data,int row,int col){
//         this->data=data;
//         this->row=row;
//         this->col=col;
//     }
// };

// class compare{
//     public:
//     bool operator()(node * a,node * b){
//         return a->data>b->data;
//     }
// };

// int kSorted(vector<vector<int>> &a, int k, int n) {
//     int maxi=INT_MIN;
//     int mini=INT_MAX;
//     priority_queue< node *,vector<node *> , compare > minHeap;
//     for(int i=0;i<k;i++){
//         int element=a[i][0];
//         maxi=max(maxi,element);
//         mini=min(mini,element);
//         minHeap.push(new node(element,i,0));
//     }

//     int start=mini;
//     int end=maxi;
//     while(!minHeap.empty()){
//         node * temp=minHeap.top();
//         minHeap.pop();
//         mini=temp->data;

//         if(maxi-mini < end-start){
//             start=mini;
//             end=maxi;
//         }

//         if(temp->col+1<n){
//             maxi=max(maxi,a[temp->row][temp->col+1]);
//             minHeap.push(new node(a[temp->row][temp->col+1],temp->row,temp->col+1));
//         } else {
//           break;
//         }
//     }
//     return (end-start+1);
// }