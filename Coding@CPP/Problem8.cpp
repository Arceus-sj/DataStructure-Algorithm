#include<iostream>

using namespace std ;

int gcdFun(int n1, int n2){
	while(n1 != n2){
		if(n1 > n2){
			n1 = n1 - n2;
		} else{
			n2 = n2 - n1;
		}
	}
	return n1;
}

int main()
{
	int n1,n2;
	cin>>n1>>n2;

	int ans = ((n1*n2)/gcdFun(n1,n2));
	cout<<ans<<endl;
	return 0;
}
