#include<algorithm>
#include<iostream>
#include<vector> 
#include<climits>


using namespace std;

//Method-1 brute force approach with complexity O(n^3)
/*
int maxSum(vector<int>& nums) {
	int n = nums.size();
	int max = INT_MIN;
	int currentSum = 0;
	int left = 0;
	int right = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++) {
			currentSum = 0;
			for(int k = i; k <=j; k++) {
				currentSum += nums[k];
			}
			cout << currentSum << ", ";
			if(currentSum > max) { 
				max = currentSum;
				left = i;
				right = j;
			}
		}
	}
	cout << "\n";
	cout << "Max Sum Subarray --> ";
	for(int i = left; i <= right; i++) {
		cout << nums[i] << " ";
	}
	cout << "\n";
	return max;
}
*/


//Method - 2
/*
int maxSumSubArray(vector<int>& nums) {
	int n = nums.size();
	int currentSum = 0;
	int maxSum = INT_MIN;
	
	vector<int> cuSum(n, 0);
	cuSum[0] = nums[0];
	
	for(int i = 1; i < n; i++) {
		cuSum[i] = cuSum[i - 1] + nums[i];
	}
	
	
	for(int i = 0;i < n; i++) {
		cout << cuSum[i] << " ";
	}
	
	cout << "\n";
	
	
	for(int i = 0; i < n; i++) {
		for(int j = i; j < n; j++) {
			currentSum = 0;
			
			currentSum = cuSum[j]  - cuSum[i];
			
			if(currentSum > maxSum)
				maxSum = currentSum;
		}
	}
	return maxSum;
	
}
*/


//Method-3 (Kadane's Algo O(N) complexity)
int maxSumSubArray(vector<int>& nums) {
	int n = nums.size();
	int currentSum = 0;
	int maxSum = INT_MIN;
	
	for(int i = 0; i < n; i++) {
		currentSum += nums[i];
		
		if(currentSum < nums[i])
			currentSum = nums[i];
		
		if(maxSum < currentSum)
			maxSum = currentSum;
	}
	
	return maxSum;
}

int main() {
	int n;
	cin >> n;
	
	vector<int> nums;
	int val;
	for(int i = 0; i < n; i++) {
		cin >> val;
		nums.push_back(val);
	}
	
	 
	
	int ans = maxSumSubArray(nums);
	
	cout << ans << "\n";
	
 	return 0;
}
