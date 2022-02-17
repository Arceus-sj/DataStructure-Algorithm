#include <iostream>
#include <vector>

using namespace std;

int findFirstOccurrence(vector<int> arr, int t) {
	int n = arr.size();
	int start = 0;
	int end = n - 1;
	
	int res = -1;
	
	while(start <= end) {
		
		int mid = start + ((end - start) / 2 );
		
		if(arr[mid] == t) {
			  
			if(arr[mid-1] == arr[mid]) {  
				end = mid - 1;
			}
			else {
				res = mid;
				break;
			}
		
		}
		else if(arr[mid] < t) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
		
	}
	
	return res;
}

int findLastOccurrence(vector<int> arr, int t) {
	int n = arr.size();
	int start = 0;
	int end = n - 1;
	
	int res = -1;
	
	while(start <= end) {
		
		int mid = start + ((end - start) / 2 );
		
		if(arr[mid] == t) {
			  
			if(arr[mid] == arr[mid+1]) {  
				start = mid + 1;
			}
			else {
				res = mid;
				break;
			}
		
		}
		else if(arr[mid] < t) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
		
	}
	
	return res;
	
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
	
	int firstIndex = findFirstOccurrence(arr, target);
	int lastIndex = findLastOccurrence(arr, target);
	
	cout << firstIndex << " " << lastIndex << "\n";
	return 0;
}
