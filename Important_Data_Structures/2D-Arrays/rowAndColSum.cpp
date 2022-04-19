#include<iostream>
#include<vector>

using namespace std;

void printSumRowWise(int a[][4], int n, int m) {
    cout << "Row wise sum-->" << "\n";
    for(int row = 0; row < n; row++) {
        int sum = 0;
        for(int col = 0; col < m; col++) {
            sum += a[row][col];
        }
        cout << sum << "\n";
    }
}

void printSumColWise(int a[][4], int n, int m) {
    cout << "Column wise sum-->" << "\n";
    for(int col = 0; col < m; col++) {
        int sum = 0;
        for(int row = 0; row < n; row++) {
            sum += a[row][col];
        }
        cout << sum << "\n";
    }
}

int main() {

    int a[3][4];

    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cin >> a[row][col];
        }
    }

    printSumRowWise(a,3,4);

    printSumColWise(a,3,4);

    return 0;
}
