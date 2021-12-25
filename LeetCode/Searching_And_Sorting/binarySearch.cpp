#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int search(vector<int> nums, int target) {
	int n = nums.size();
	int startIndex = 0;
	int endIndex = n - 1;
	while(startIndex <= endIndex) {
		int mid = (startIndex + endIndex) / 2;
		
		if(target == nums[mid]) 
			return mid;
		else if(target > nums[mid])
			startIndex = mid + 1;
		else
			endIndex = mid - 1;
			
	}
	
	return -1;
}

int main() {
	int n, target;
	cin >> n >> target;
	
	vector<int> nums;
	int it;
	for(int i = 0; i < n; i++) {
		cin >> it;
		nums.push_back(it);
	}
	
	cout << search(nums, target) << "\n";
	return 0;
}
