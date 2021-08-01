#include<iostream>

using namespace std;

void findPosition(int apple[], int orange[], int m, int n, int s, int t, int a, int b){
	
	
	for(int i=0;i<m;i++){
		//cout<<apple[i]<<" ";
		apple[i] += a;
	}
	
	
	for(int j=0;j<n;j++){
		 //cout<<orange[j]<<" ";
		 orange[j] += b;
	}
	
	//for loop to count apple in range[start, end]
	int countApple = 0;
	for(int i=0; i<m; i++){
		if(apple[i] >= s && apple[i] <= t){
			countApple++;
		}
	}
	
	//for loop to count orange in range[start, end]
	int countOrange = 0;
	for(int i=0; i<n; i++){
		if(orange[i] >= s && orange[i] <= t){
			countOrange++;
		}
	}
	
	cout<<countApple<<endl;
	cout<<countOrange<<endl;
}

int main()
{
	//s = starting point and t = ending point
	int s, t;
	cin>>s>>t;
	
	//position of trees
	//a = position of apple tree
	//b = position of orange tree
	int a, b;
	cin>>a>>b;
	
	//m = number of apple fell
	//n = number of orange fell
	int m, n;
	cin>>m>>n;
	
	int apple[m], orange[n];
	for(int i=0;i<m;i++) {
		cin>>apple[i];
	}
	
	for(int i=0;i<n;i++) {
		cin>>orange[i];
	}
	
	findPosition(apple, orange, m, n, s, t, a, b);
	
	return 0;
}
