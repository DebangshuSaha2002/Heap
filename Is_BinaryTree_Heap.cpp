// //Is Binary Tree HeapIs Binary Tree Heap

// // Given a binary tree. The task is to check whether the given tree follows the max heap property or not.
// // Note: Properties of a tree to be a max heap - Completeness and Value of node greater than or equal to its child.

// // Example 1:

// // Input:
// //       5
// //     /  \
// //    2    3
// // Output: 1
// // Explanation: The given tree follows max-heap property since 5,
// // is root and it is greater than both its children.

// // Example 2:

// // Input:
// //        10
// //      /   \
// //     20   30 
// //   /   \
// //  40   60
// // Output: 0

// // Your Task:
// // You don't need to read input or print anything. Your task is to complete the function isHeap() which takes the root of Binary Tree as parameter returns True if the given binary tree is a heap else returns False.

// // Expected Time Complexity: O(N)
// // Expected Space Complexity: O(N)

// // Structure of node
// /*struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };*/

// class Solution {
//     private:
//     int countNodes(struct Node* tree){
//         if(tree==NULL){
//             return 0;
//         }
        
//         int ans=1+countNodes(tree->left)+countNodes(tree->right);
//         return ans;
//     }
    
//     bool isCBT(struct Node* root,int index,int cnt){
//         if(root==NULL){
//             return true;
//         }
//         if(index>=cnt){
//             return false;
//         }
//         else{
//             bool left=isCBT(root->left,2*index+1,cnt);
//             bool right=isCBT(root->right,2*index+2,cnt);
//             return (left&&right);
//         }
//     }
    
//     bool isMaxHeap(struct Node * tree){
//         if(tree->left==NULL && tree->right==NULL){
//             return true;
//         }
        
//         if(tree->right==NULL){
//             return (tree->data > tree->left->data);
//         }
        
//         else{
//             bool left=isMaxHeap(tree->left);
//             bool right=isMaxHeap(tree->right);
//             return (left && right && (tree->data > tree->left->data && tree->data > tree->right->data));
//         }
//     }
//   public:
//     bool isHeap(struct Node* tree) {
//         int index=0;
//         int totalcnt=countNodes(tree);
//         if(isCBT(tree,index,totalcnt) && isMaxHeap(tree)){
//             return true;
//         }
//         else
//             return false;
//     }
// };