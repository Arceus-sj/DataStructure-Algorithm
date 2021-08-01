#include<iostream>

using namespace std;

void findGrade(int oldGrade[], int n){
	int newGrade[n] = {0};
	
	for(int i=0;i<n;i++){
		int round = (((oldGrade[i] + 4) / 5) * 5);
		
		if(round < 40){
			newGrade[i] = oldGrade[i];
		}
		else {
			if(round - oldGrade[i] < 3) {
				newGrade[i] = round;
			}
			else {
				newGrade[i] = oldGrade[i];
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<newGrade[i]<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	
	int oldGrade[n];
	for(int i=0;i<n;i++){
		cin>>oldGrade[i];
	}
	
	findGrade(oldGrade, n);
	
	
	return 0;
}
