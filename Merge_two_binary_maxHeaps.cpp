// // Merge two binary Max heaps
// // EasyAccuracy: 58.65%Submissions: 30K+Points: 2
// // Apply for Mega Job-A-Thon: Fresher Edition | 30+ Opportunities | Avg CTC: 7 LPA  

// // Given two binary max heaps as arrays, merge the given heaps to form a new max heap.

 

// // Example 1:

// // Input  : 
// // n = 4 m = 3
// // a[] = {10, 5, 6, 2}, 
// // b[] = {12, 7, 9}
// // Output : 
// // {12, 10, 9, 2, 5, 7, 6}
// // Explanation :

// // Submit
// // Submit
// // Submit
 

 

// // Your Task:  
// // You don't need to read input or print anything. Your task is to complete the function mergeHeaps() which takes the array a[], b[], its size n and m, as inputs and return the merged max heap. Since there can be multiple solutions, therefore, to check for the correctness of your solution, your answer will be checked by the driver code and will return 1 if it is correct, else it returns 0.

 

// // Expected Time Complexity: O(n.Logn)
// // Expected Auxiliary Space: O(n + m)

// class Solution{
//     private:
//     void heapify(vector<int> & ans,int i,int n){
//         int largest=i;
//         int left=2*i+1;
//         int right=2*i+2;
//         if(left<=n && ans[largest]<ans[left]){
//             largest=left;
//         }
//         if(right<=n && ans[largest]<ans[right]){
//             largest=right;
//         }
//         if(largest!=i){
//             swap(ans[i],ans[largest]);
//             heapify(ans,largest,n);
//         }
//     }
    
//     public:
//     vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
//         vector<int> ans;
//         for(int i=0;i<a.size();i++){
//             ans.push_back(a[i]);
//         }
        
//         for(int i=0;i<b.size();i++){
//             ans.push_back(b[i]);
//         }
//         int p=ans.size()-1;
//         for(int i=p/2;i>=0;i--){
//             heapify(ans,i,p);
//         }
        
//         return ans;
//     }
// };