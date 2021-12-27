#include<iostream>
#include<vector>

using namespace std;

int search(vector<int>& arr, int t) {
	int n = arr.size();
	int startIndex = 0;
	int endIndex = n - 1;
	while(startIndex <= endIndex) {
		int mid = (startIndex + (endIndex - startIndex) / 2);
		
		if(arr[mid] == t)
			return mid;
		
		if(arr[mid] > t)
			startIndex = mid + 1;
		else 
			endIndex = mid - 1;
	}
	
	return -1;
}

int main() {
	int n, target;
	cin >> n >> target;
	
	vector<int> arr;
	int it;
	for(int i = 0; i < n; i++) {
		cin >> it;
		arr.push_back(it);
	}
	
	cout << search(arr, target) << "\n";
	return 0;
}
