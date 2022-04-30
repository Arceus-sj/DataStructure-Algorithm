#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int> (n,0));

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = n - 1;
    int endingCol = n - 1;
    int count = 0;
    int element = 1;
    while(count < (n*n)) {

        for(int index = startingCol; count < (n*n) && index <= endingCol; index++) {
            matrix[startingRow][index] = element;
            element++;
            count++;
        }
        startingRow++;


        for(int index = startingRow; count < (n*n) && index <= endingRow; index++) {
            matrix[index][endingCol] = element;
            element++;
            count++;
        }
        endingCol--;

        for(int index = endingCol; count < (n*n) && index >= startingCol; index--) {
            matrix[endingRow][index] = element;
            element++;
            count++;
        }
        endingRow--;

        for(int index = endingRow; count < (n*n) && index >= startingRow; index--) {
            matrix[index][startingCol] = element;
            element++;
            count++;
        }
        startingCol++;

    }

    return matrix;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> ans = generateMatrix(n);

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n; col++) {
            cout << ans[row][col] << " ";
        }
        cout << "\n";
    }
    return 0;
}
