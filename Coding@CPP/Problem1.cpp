// Given an integral number N. The task is to find the count of digits present in this number.

// N = 2019
// Number of digits in N here is 4 and,
// the digits are: 2, 0, 1, 9.

#include<iostream>

using namespace std;

int main()
{
	int digit, count = 0;
	cin>>digit;

	if(digit == 0){
		count = 0;
		cout<<count<<endl;
		return 0;
	}
	cout<<"--------------"<<endl;
	
	while(digit != 0){
		 
		 	digit = digit / 10;
		 	count++;
		
	}
	cout<<count<<endl;
	return 0;
}
