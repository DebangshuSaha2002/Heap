// //Merge K Sorted Arrays using MinHeap

// // Problem Statement

// // Sample Input 1:
// // 1
// // 2
// // 3 
// // 3 5 9 
// // 4 
// // 1 2 3 8   

// // Sample Output 1:
// // 1 2 3 3 5 8 9 
// // Explanation Of Sample Input 1:
// // After merging the two given arrays/lists [3, 5, 9] and [ 1, 2, 3, 8], the output sorted array will be [1, 2, 3, 3, 5, 8, 9].

// // Sample Input 2:
// // 1
// // 4
// // 3
// // 1 5 9
// // 2
// // 45 90
// // 5
// // 2 6 78 100 234
// // 1
// // 0

// // Sample Output 2:
// // 0 1 2 5 6 9 45 78 90 100 234
// // Explanation Of Sample Input 2 :
// // After merging the given arrays/lists [1, 5, 9], [45, 90], [2, 6, 78, 100, 234] and [0], the output sorted array will be [0, 1, 2, 5, 6, 9, 45, 78, 90, 100, 234].


// #include <bits/stdc++.h> 

// class node{
//     public:
//     int data;
//     int i;
//     int j;
//     node(int data,int row,int col){
//         this->data=data;
//         this->i=row;
//         this->j=col;
//     }
// };

// class compare{
//     public:
//       bool operator()(node *a, node *b) 
//       { 
//           return a->data > b->data; 
//       }
// };

// vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k) 
// {
//   priority_queue<node *, vector<node *>, compare> minHeap;
//   vector<int> result;

//   // Step-1 insert first element of all the k arrays into the minHeap
//   for (int i = 0; i < k; i++) {
//     node *temp = new node(kArrays[i][0], i, 0);
//     minHeap.push(temp);
//   }

//   while (!minHeap.empty()) {
//     node *val = minHeap.top();
//     result.push_back(val->data);
//     minHeap.pop();

//     int i = val->i;
//     int j = val->j;

//     if (j + 1 < kArrays[i].size()) {
//       node *nextele = new node(kArrays[i][j + 1], i, j + 1);
//       minHeap.push(nextele);
//     }
//   }
//   return result;
// }