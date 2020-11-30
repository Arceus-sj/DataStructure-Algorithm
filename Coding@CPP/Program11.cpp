#include<iostream>

using namespace std;

void input(int *a, int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

int main()
{
	int a[3], b[3], alicePoint = 0, bobPoint = 0;
	input(a,3);
	input(b,3);

	for(int i=0;i<3;i++){
		if(a[i] > b[i]){
			alicePoint++;
		}
		else if(a[i] < b[i]){
			bobPoint++;
		}
		else{
			alicePoint = alicePoint + 0;
			bobPoint = bobPoint + 0;
		}
	}

	cout<<alicePoint<<" "<<bobPoint<<"\n";
	return 0;
}
