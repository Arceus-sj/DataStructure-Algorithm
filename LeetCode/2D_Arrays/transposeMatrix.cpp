#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    
    int mRows = matrix.size();
    int nCols = matrix[0].size();
    vector<vector<int>> ans;

    // if mRows == nCols:
    if(mRows == nCols) {
        ans.assign(mRows, vector<int> (nCols,0));
        for(int row = 0; row < mRows; row++) {
            for(int col = row; col <= nCols-1; col++) {
                if(row == col) {
                    ans[row][col] = matrix[row][col];
                }
                else {
                    ans[row][col] = matrix[col][row];
                    ans[col][row] = matrix[row][col];
                }
            }
        }
    }
    else {
        cout << "row < col" << "\n";

        int numOfRows = nCols;
        int numOfCols = mRows;
        ans.assign(numOfRows, vector<int> (numOfCols,0));

        for(int row = 0; row < numOfRows; row++) {
            for(int col = 0; col < numOfCols; col++) {
                ans[row][col] = matrix[col][row];
                // cout << ans[row][col] << " ";
            }
            // cout << "\n";
        }

    }

    return ans;

}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix;
    
    int val;

    for(int i = 0; i < m; i++) {
        vector<int> temp;
        for(int j = 0; j < n; j++) {
            cin >> val;
            temp.push_back(val);
        }
        matrix.push_back(temp);
        temp.clear();
    }
 
    vector<vector<int>> ans = transpose(matrix);
    

    cout << "---------------" << "\n";

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
