#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int matSize = mat.size();
    
    int diagonal_1 = 0;
    int diagnoal_2 = 0;
    
    int index1 = matSize - 1;
    int index2 = 0;
    
    if(matSize == 1) { 
        return mat[0][0];
    }
    else {
        if(matSize % 2 != 0) {//odd size {3,5,7,...}
            
            for(int i = 0; i < matSize; i++) {
                diagonal_1 += mat[i][i];
                
                
                diagnoal_2 += mat[index1][index2];
                index1--;
                index2++;

                
            }

            diagnoal_2 = diagnoal_2 - mat[(matSize - 1)/2][(matSize - 1)/2];
        }
        else { //even size {2,4,6,....}
            
            for(int i = 0; i < matSize; i++) {
                diagonal_1 += mat[i][i];
                
                
                diagnoal_2 += mat[index1][index2];
                index1--;
                index2++;

                
            }
        }
    }
    
    return (diagonal_1+diagnoal_2);
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> mat;
    int val;
    for(int i = 0; i < n; i++) {
        vector<int> temp;
        for(int j = 0; j < n; j++) {
            cin >> val;
            temp.push_back(val);
        }
        mat.push_back(temp);
    }

    cout << diagonalSum(mat) << "\n";

    return 0;
}
