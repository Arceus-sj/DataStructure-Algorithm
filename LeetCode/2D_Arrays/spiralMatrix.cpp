#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    
    int row = matrix.size();
    int col = matrix[0].size();
    int totalNumbers = row * col;
    
    //index
    int startingRow = 0;
    int stratingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;
  
    int count = 0;
    while(count < totalNumbers) {
        
        //print strating row
        for(int index = stratingCol; (count < totalNumbers) && index <= endingCol; index++) {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        
        //print ending col
        for(int index = startingRow; (count < totalNumbers) && index <= endingRow; index++) {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;
        
        //print ending row
        for(int index = endingCol; (count < totalNumbers) && index >= stratingCol; index--) {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
        
        //print strating col
        for(int index = endingRow; (count < totalNumbers) && index >= startingRow; index--) {
            ans.push_back(matrix[index][stratingCol]);
            count++;
        }
        stratingCol++;
    }
    
    return ans;
}

int main() {
   

   vector<vector<int>> matrix
   {
    {1,2,3},
    {4,5,6},
    {7,8,9}
   };
   

    vector<int> ans = spiralOrder(matrix);
    for(auto x:ans) {
        cout << x << " ";
    }
    return 0;
}
