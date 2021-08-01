#include<iostream>

using namespace std;

int findMax(int *a, int n){
	int maxScore = a[0];
	int countMax = 0;
	
	for(int i=1;i<n;i++){
		if(a[i] > maxScore){
			maxScore = a[i];
			//cout<<maxScore<<" ";
			countMax++;
		}
	}
	
	
	return countMax;
}


int findMin(int *a, int n){
	int minScore = a[0];
	int countMin = 0;
	
	for(int i=1;i<n;i++){
		if(a[i] < minScore){
			minScore = a[i];
			//cout<<minScore<<" ";
			countMin++;
		}
	}
	
	return countMin;
}


int main()
{
	//n = number of matches
	int n;
	cin>>n;
	
	//a[] = it store all scores 
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<< findMax(a, n) <<endl;
	cout<< findMin(a, n) <<endl;
	return 0;
}
