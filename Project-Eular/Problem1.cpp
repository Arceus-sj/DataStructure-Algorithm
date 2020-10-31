/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include<iostream>

using namespace std ;

int main()
{
	int naturalNum;
	cin>>naturalNum;

	int i=1;
	int totalSum=0;
	while(i<naturalNum){
		if(i%3==0 || i%5==0){
			totalSum += i;
		}
		i++;
	}
	cout<<endl;
	cout<<"total is:"<<totalSum<<endl;
	return 0;
}
