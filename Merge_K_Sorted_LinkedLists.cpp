// // Merge k sorted lists

// // Hard

// // Problem Statement
// // //Problem Statement

// // // Given 'K' sorted linked lists, 
// // // each list is sorted in increasing order. You need to merge all 
// // // these lists into one single sorted list. You need to return the head 
// // // of the final linked list.
// // Sample Input 1:
// //  2
// //  3
// //  4 6 8 -1
// //  2 5 7 -1
// //  1 9 -1
// //  2
// //  2 6 -1
// //  -5 7 -1
// // Sample Output 1:
// //  1 2 4 5 6 7 8 9 -1
// //  -5 2 6 7 -1
// // Explanation For Input 1:
// // For first test case:
// // First list is: 4 -> 6 -> 8 -> NULL
// // Second list is: 2 -> 5 -> 7 -> NULL
// // Third list is: 1 -> 9 -> NULL
// // The final list would be: 1 -> 2 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> NULL

// // For second test case:
// // First list is: 2 -> 6 -> NULL
// // Second list is: -5 -> 7 -> NULL
// // The final list would be: -5 -> 2 -> 6 -> 7 -> NULL
// // Sample Input 2:
// //  2
// //  3
// //  8 9 11 -1
// //  1 2 -1 
// //  -1 
// //  1
// //  1 5 6 8 10 -1
// // Sample Output 2:
// // 1 2 8 9 11 -1
// // 1 5 6 8 10 -1


//     Following is the linked list node structure

//     template <typename T>
//     class Node {
//         public:
//         T data;
//         Node* next;

//         Node(T data) {
//             next = NULL;
//             this->data = data;
//         }

//         ~Node() {
//             if (next != NULL) {
//                 delete next;
//             }
//         }
//     };

// ************************************************************/
// #include<queue>
// class compare{
//     public:
//     bool operator()(Node<int>* a, Node<int>* b){
//         return a->data>b->data;
//     }   
// };


// Node<int>* mergeKLists(vector<Node<int>*> &listArray)
// {
//     priority_queue < Node<int>*,vector<Node<int>*>,compare > minHeap;
//     int k=listArray.size();

//     if(k==0){
//         return NULL;
//     }
    
//     for(int i=0;i<k;i++){
//       if (listArray[i] != NULL) {
//         minHeap.push(listArray[i]);
//       }
//     }

//     Node<int>* head=NULL;
//     Node<int>* tail=NULL;
    
//     while(minHeap.size()>0){
//         Node<int>* top=minHeap.top();
//         minHeap.pop();

//         if (top->next != NULL) {
//           minHeap.push(top->next);
//         }
        
//         if (head == NULL) {
//           head = top;
//           tail = top;
//         }
//         else{
//             tail->next=top;
//             tail=top;
//         }
//     }
//     return head;
// }