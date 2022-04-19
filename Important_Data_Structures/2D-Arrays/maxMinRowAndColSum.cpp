#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void printSumRowWise(int a[][4], int n, int m) {
    int maxSum = INT_MIN;
    int minSum = INT_MAX;
    cout << "Row wise sum-->" << "\n";
    for(int row = 0; row < n; row++) {
        int sum = 0;
        for(int col = 0; col < m; col++) {
            sum += a[row][col];
        }
        cout << sum << "\n";

        if(sum > maxSum)
            maxSum = sum;

        if(sum < minSum)
            minSum = sum;
    }

    cout << "Maximum sum value is " << maxSum << "\n";
    cout << "Minimum sum value is " << minSum << "\n";
}

void printSumColWise(int a[][4], int n, int m) {
    int maxSum = INT_MIN;
    int minSum = INT_MAX;
    cout << "Column wise sum-->" << "\n";
    for(int col = 0; col < m; col++) {
        int sum = 0;
        for(int row = 0; row < n; row++) {
            sum += a[row][col];
        }
        cout << sum << "\n";

        if(sum > maxSum)
            maxSum = sum;

        if(sum < minSum) 
            minSum = sum;
    }

    cout << "Maximum sum value is " << maxSum << "\n";
    cout << "Minimum sum value is " << minSum << "\n";
}

int main() {

    int a[3][4];

    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cin >> a[row][col];
        }
    }

    printSumRowWise(a,3,4);

    cout << "---------------------" << "\n";

    printSumColWise(a,3,4);

    return 0;
}
