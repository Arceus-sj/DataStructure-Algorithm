 
#include<iostream>
using namespace std;
 

int main() {
    int N;
    cin>>N;
     
    int grid[N][N];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i == j)
                grid[i][j] = 0;
            else if(i < j)
                grid[i][j] = 1;
            else if(i > j)
                grid[i][j] = -1;
        }
    }   
     
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout<<grid[i][j]<<" ";
        }    
        cout<<endl;
    }
    return 0;
}
