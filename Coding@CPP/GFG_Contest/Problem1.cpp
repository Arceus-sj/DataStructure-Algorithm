#include<iostream>

using namespace std ;

int totalScore(int a[], int n){
    int score = 0;
    for(int i=0;i<n;i++){
        score = score + a[i];
    }
    return score;
}


int main()
{
    int testCase; 
    cin>>testCase;
    while(testCase--){
    int n1, n2;
    cin>>n1>>n2;
    
    int c1[n1], c2[n2];
    for(int i=0;i<n1;i++){
        cin>>c1[i];
    }
    
    for(int i=0;i<n2;i++){
        cin>>c2[i];
    }
    
    int score1 = totalScore(c1,n1);
    int score2 = totalScore(c2,n2);

    // cout<<score1<<" & "<<score2 <<"\n";
    (score1 > score2) ? cout<<"C1"<<"\n" : cout<<"C2 "<<"\n" ;
}
    return 0;
}
