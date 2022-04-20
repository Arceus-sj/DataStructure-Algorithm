#include <iostream>
#include <vector>

using namespace std;

vector<int> wavePrint(int nRow, int mCol, int arr[][10]) {
    vector<int> res;
    
    for(int col = 0; col < mCol; col++) {
        if(col % 2 == 0) {
            //even index --> top-bottom
            for(int row = 0; row < nRow; row++) {
                // cout << arr[row][col] << " ";
                res.push_back(arr[row][col]);
            }
        }
        else {
            //odd index --> bottom-top
            for(int row = nRow-1; row >= 0; row--) {
                // cout << arr[row][col] << " ";
                res.push_back(arr[row][col]);
            }
        }
    }

    return res;
}

int main() {
    int n, m;
    cin >> n >> m;

    int arr[10][10];

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < m; col++) {
            cin >> arr[row][col];
        }
    }

    vector<int> ans = wavePrint(n,m,arr);

    for(auto x:ans) {
        cout << x << " ";
    }
    
    return 0;
}
