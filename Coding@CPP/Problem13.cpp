#include<iostream>
#define MAX 500

using namespace std;

int mult(int x, int *a, int size){

	int carry = 0;

	for(int i=0; i<size; i++){
		int prod = a[i] * x + carry;
		a[i] = prod % 10;
		carry = prod / 10; 
	}

	while(carry){

		a[size] = carry % 10;
		carry = carry / 10;
		size++;
	}

	return size;
}

void factorial(int n){

	int a[MAX];
	int size = 1;
	a[0] = 1;
	 

	for(int i=2;i<=n;i++){
		size = mult(i, a, size);
	}

	for(int i=size-1;i>=0;--i){
		cout<<a[i];
	}

	cout<<endl;

	 
}

int main()
{
	int n;
	cin>>n;

	factorial(n);
	return 0;
}
