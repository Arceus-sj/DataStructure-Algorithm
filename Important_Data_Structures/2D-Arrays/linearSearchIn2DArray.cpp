#include<iostream>
#include<vector>

using namespace std;

bool isPresent(int a[][4], int target, int row, int col) {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            if(a[row][col] == target) {
                return true;
            }
        }
    }

    return false;
}

int main() {


    int a[3][4];

    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cin >> a[row][col];
        }
    }


    //Linear-search in 2D array
    int target; cin >> target;

    if(isPresent(a, target, 3, 4)) {
        cout << "Element Found!" << "\n";
    }
    else {
        cout << "Element not found!" << "\n"; 
    }

    return 0;
}
