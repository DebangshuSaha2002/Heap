// // K-th Largest Sum Subarray
// // Problem Statement
// // Detailed explanation ( Input/output format, Notes, Images )
// // Sample Input 1 :
// // 2
// // 3 3
// // 3 -2 5
// // 2 2
// // 4 1
// // Sample output 1 :
// // 3
// // 4
// // Explanation of Sample output 1 :
// // For the first test case, 
// // Sum of [0, 0] = 3
// // Sum of [0, 1] = 1
// // Sum of [0, 2] = 6
// // Sum of [1, 1] = -2
// // Sum of [1, 2] = 3
// // Sum of [2, 2] = 5
// // All sum of subarrays are {6, 5, 3, 3, 1, -2} where the third largest element is 3.

// // For the second test case, 
// // Sum of [0, 0] = 4
// // Sum of [0, 1] = 5
// // Sum of [1, 1] = 1
// // All sum of subarrays are {5, 4, 1} where the second largest element is 4.
// // Sample Input 2 :
// // 2
// // 4 10
// // 5 4 -8 6
// // 3 1
// // 1 2 3
// // Sample output 2 :
// // -8
// // 6
// // Explanation of Sample output 2 :
// // For the first test case, among the sum of all the subarray, the tenth-largest sum will be -8.

// // For the second test case, among the sum of all the subarray, the largest sum will be 6.


#include<algorithm>
int getKthLargest(vector<int> &arr, int k)
{
	vector<int> ans;
	int sum=0;
	int n=arr.size();
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum=sum+arr[j];
			ans.push_back(sum);
		}
	}
	sort(ans.begin(),ans.end());
	return ans[ans.size()-k];
}