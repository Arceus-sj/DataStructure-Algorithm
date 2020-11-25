// Method - I
#include<iostream>

using namespace std ;

int main()
{
	int n1,n2;
	cin>>n1>>n2;

	int max = (n1 > n2) ? n1 : n2 ;

	do{
		if(max % n1 == 0 && max % n2 == 0){
			cout<<max<<endl;
			return 0;
		}
		else{
			max++;
		}
	}
	while(true);
	return 0;
}
