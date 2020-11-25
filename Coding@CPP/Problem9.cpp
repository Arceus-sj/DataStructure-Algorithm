#include<iostream>

using namespace std ;
 
int gcd(int n1, int n2){
	while(n1 != n2){
		if(n1 > n2){
			n1 = n1 - n2;
		} else{
			n2 = n2 - n1;
		}
	}
	return n1;
}

int smallestDivisibleNumber(int n){
	int ans = 1;
	for(int i=1;i<=n;i++){
		ans = (ans * i) / gcd(ans, i);
	}
	return ans;
}

int main()
{
	int n ;
	cin>>n;

	cout<< smallestDivisibleNumber(n) <<endl;
	return 0;
}
