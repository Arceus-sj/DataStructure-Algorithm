#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
	int n = numbers.size();
	vector<int> index;

	int left = 0;
	int right = n - 1;

	while(left < right) {
		if((numbers[left] + numbers[right]) == target) {
			index.push_back(++left);
			index.push_back(++right);
			break;
		}
		else if ((numbers[left] + numbers[right]) < target) {
			left++;
		}	
		else {
			right--;
		}
	}

	return index;
}

int main() {
	int n, target;
	cin >> n >> target;
	
	vector<int> numbers;
	vector<int> ans;
	int it;
	for(int i = 0; i < n; i++) {
		cin >> it;
		numbers.push_back(it);
	}

	ans = twoSum(numbers, target);

	for(auto x:ans) {
		cout << x << " ";
	}
	return 0;
}
