// // Median in a stream
// // Problem Statement
// // Given that integers are read from a data stream. Your task is to find the median of the elements read so far.
// // Median is the middle value in an ordered integer list. If the size of the list is even there is no middle 
// // value. So the median is the floor of the average of the two middle values.
// // For Example:

// // [2,3,4] - median is 3.
// // [2,3] - median is floor ( (2+3) /2) = 2.

// // Sample Input 1:
// // 3
// // 3
// // 1 2 3 
// // 2
// // 9 9 
// // 1
// // 4 
// // Sample Output 1:
// // 1 1 2
// // 9 9 
// // 4 
// // Explanation For Sample Input 1:
// // For test case 1 
// // After reading first element of stream , Median of [1] is 1 
// // After reading second element of stream, Median of [1, 2]  = floor((1+2)/2)  = 1
// // After reading third element of stream, Median of [1,2,3] = 2
// // So the output will be 1 1 2.
// // Sample Input 2:
// // 2
// // 3
// // 5 3 8
// // 2
// // 3 8
// // Sample Output 2:
// // 5 4 5
// // 3 5
// // Explanation For Sample Input 2:
// // For test case 1 
// // After reading first element of stream, Median of [5] is 5
// // After reading second element of stream, Median of [5, 3]  = floor((5+3)/2)  = 4
// // After reading third element of stream, Median of [5,3,8] = 5 , it is the middle value of the sorted array
// // So the output will be 5 4 5.


// #include<queue>

// int signum(int a,int b){
// 	if(a==b){
// 		return 0;
// 	}
// 	if(a>b){
// 		return 1;
// 	}
// 	else{
// 		return -1;
// 	}
// }

// void getMedian(int element,priority_queue<int> &maxHeap,priority_queue<int,vector<int>, greater<int> > & minHeap,int & median)
// {
// 	switch(signum(maxHeap.size(),minHeap.size())){
// 		case 0:
// 		if(element>median){
// 			minHeap.push(element);
// 			median=minHeap.top();
// 		}else{
// 			maxHeap.push(element);
// 			median=maxHeap.top();
// 		}
// 		break;

// 		case 1:
// 		if(element>median){
// 			minHeap.push(element);
// 			median=(maxHeap.top()+minHeap.top())/2;
// 		}
// 		else{
// 			int ele=maxHeap.top();
// 			maxHeap.pop();
// 			minHeap.push(ele);
// 			maxHeap.push(element);
// 			median=(maxHeap.top()+minHeap.top())/2;
// 		}
// 		break;

// 		case -1:
// 		if(element>median){
// 			int el=minHeap.top();
// 			minHeap.pop();
// 			maxHeap.push(el);
// 			minHeap.push(element);
// 			median=(maxHeap.top()+minHeap.top())/2;	
// 		}
// 		else{
// 			maxHeap.push(element);
// 			median=(maxHeap.top()+minHeap.top())/2;
// 		}
// 		break;

// 	}
// }


// vector<int> findMedian(vector<int> &arr, int n){
// 	priority_queue<int> maxHeap;
// 	priority_queue<int,vector<int>, greater<int> > minHeap;
// 	int median=0;
// 	vector<int> ans;
// 	for(int i=0;i<n;i++){
// 		getMedian(arr[i],maxHeap,minHeap,median);
// 		ans.push_back(median);
// 	}
// 	return ans;
// }
