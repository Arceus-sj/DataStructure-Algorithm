#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>

using namespace std;

// brute force approach
void maxSubArray(vector<int> &a, int n){


    
    int maxSum = INT_MIN;

    for(int i=0;i<n;i++){
        for(int j=i; j<n; j++){

            int sum = 0;
            for(int k=i;k<=j;k++){
                // cout<<a[k]<<" ";
                sum += a[k];
                maxSum = max(maxSum, sum);
            }
            // cout<<sum<<endl;
            
        }
        
          
    }

    // cout<<"Max Sum is "<<maxSum<<endl;
    return maxSum;
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

    cout<<maxSubArray(a, n)<<endl;
    return 0;
}



 
