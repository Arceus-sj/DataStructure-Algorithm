#include<iostream>
#include<algorithm>

using namespace std;

int removeDuplicate(int *a, int n){
    int j=0;
    int temp[n];

    for(int i=0;i<n-1;i++)
        if(a[i] != a[i+1])
            temp[j++] = a[i];
        
        temp[j++] = a[n-1];


    for(int i=0; i<j; i++)
        a[i] = temp[i];

    return j;
}

int findUnion(int *a, int n, int *b, int m){
    int i = 0, j = 0, count = 0;
    while(i < n && j < m){

        
       
        if(a[i] < b[j]){
            // cout<<a[i]<<" "; 
            i++;
            count++;
        }
        else if(b[j] < a[i]){
            // cout<<b[j]<<" ";
            j++;
            count++;
        }
        else{
            j++;
            i++; 
            count++;
        }
    }

    while(i < n){
        i++;
        count++;
    }

    while(j < m){
        j++;
        count++;
    }

    return count;

}

int main()
{
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<m;i++){
        cin>>b[i];
    }

 
    sort(a, a+n);
    sort(b, b+m);
    int N = removeDuplicate(a, n);
    int M = removeDuplicate(b, m);
    
    cout<< findUnion(a, N, b, M) <<endl;
    return 0;
}
