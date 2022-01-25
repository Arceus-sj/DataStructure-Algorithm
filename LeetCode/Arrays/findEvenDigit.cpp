#include<iostream>
#include<vector>
#include<cstring>
#include<sstream>
#include<typeinfo>
#include<cmath>

using namespace std;

/*
int findNumbers(vector<int>& nums) {
	int size = nums.size(); 
	
	int countEvenDigits = 0;
	
	for(int i = 0; i < size; i++) {
		
		stringstream ss;
		
		ss << nums[i];
		
		string number;
		
		ss >> number;
		
		//cout << "Digit " << number << " | size " << number.length() << "\n"; 
		
		if(number.length() % 2 == 0)
			countEvenDigits++;
		
	}
	
	return countEvenDigits;
	
}
*/

//optimized-method
int findNumbers(vector<int>& nums) {
	int size = nums.size();
	
	int countEvenDigit = 0;
	for(int i = 0; i < size; i++) {
		
		int num = floor(log10(nums[i]) + 1);
		if(num % 2 == 0)
			countEvenDigit++;
	}
	
	return countEvenDigit;
	
}

int main() {
	int n;
	cin >> n;
	
	vector<int> nums;
	int it;
	for(int i = 0;i < n; i++) {
		cin >> it;
		nums.push_back(it);
	}
	
	
	cout << findNumbers(nums) << "\n";
	return 0;
}
