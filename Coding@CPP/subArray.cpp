#include<iostream>
#include<vector>

using namespace std;

void subArray(vector<int> &a, int n){

    for(int i=0;i<n;i++){
        for(int j=i; j<n; j++){
            for(int k=i;k<=j;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
          
    }
}

int main(){

    int n;
    cin>>n;

    vector<int> a;
    int item;
    for(int i=0; i <= n-1; i++){
        cin>>item;
        a.push_back(item);
    }

    subArray(a, n);
    return 0;
}
