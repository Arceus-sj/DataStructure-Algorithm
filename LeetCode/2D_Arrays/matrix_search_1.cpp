#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = (row*col) - 1;

    while (start <= end){
        int mid = start + ((end - start) / 2);

        int element = matrix[mid/col][mid%col];

        if(element == target) {
            return true;
        }
        else if(element < target) {
            start = mid + 1;
        }
        else if(element > target) {
            end = mid - 1;
        }

    }

  return false;  
}

int main() {
    vector<vector<int>> matrix 
    {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    int target; cin >> target;

    cout << boolalpha <<searchMatrix(matrix, target) << "\n";

    return 0;
}
