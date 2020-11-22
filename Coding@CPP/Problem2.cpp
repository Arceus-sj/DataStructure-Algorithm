#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
	int N;
	cin>>N;

	if(N <= 0){
		cout<<0<<endl;
		return 0;
	}

	int totalDigit = floor(log10(N) + 1); //The floor function returns the largest integer that is smaller than or equal to N
	cout<< totalDigit <<endl;
	
	return 0; 
}
