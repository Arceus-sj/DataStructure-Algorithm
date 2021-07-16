#include<iostream>

using namespace std;

int birthdayCakeCandles(int *a, int n) {
    int highest = 0;// candle height
    int countHighestCandles = 0;
    for(int i=0; i<n; i++) {
        if(a[i] >= highest) {
            highest = a[i];
        }
    }

    for(int i=0; i<n; i++) {
        if(a[i] == highest)
            countHighestCandles++;
    }
    
    cout << "Heighest Candle height " << highest << endl;
    return countHighestCandles;
}

int main() {

    int n;
    cin >> n;
    
    int candles[n];
    for(int i=0; i<n; i++) {
        cin >> candles[i];
    }

    cout << birthdayCakeCandles(candles, n) << endl;
    return 0;
}
