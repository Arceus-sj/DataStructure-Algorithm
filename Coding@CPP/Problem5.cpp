#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
	int n, binaryNumber = 0 ,remainder, i = 1; 
	cout<<"Enter number: ";
	cin>>n;

		 
 	while(n > 0) {

 		remainder = n % 2;
 		n = n / 2;
 		binaryNumber = binaryNumber + remainder * i;
 		i = i * 10;
 	}	

	cout<<binaryNumber;	 
	return 0;
}
