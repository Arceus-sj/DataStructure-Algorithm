#include<iostream>

using namespace std;

int findSumPair(int *a, int n, int k) {
	int count = 0;
	for(int i=0;i<n;i++) {
		
		for(int j=i+1;j<n;j++) {
			
			int pair = a[i] + a[j];
			if(pair % k == 0) {
				count++;
				//cout<<a[i]<<" "<<a[j]<<endl;
				continue;
			}
		}
	}
	
	return count;
}

int main()
{
	int n, k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	
	cout<<findSumPair(a, n, k)<<"\n";
	return 0;
}
