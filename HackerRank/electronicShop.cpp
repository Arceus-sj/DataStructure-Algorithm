#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int getMoneySpent(int *keyB, int n, int *usb, int m, ll int b) {
    ll int res = -1;

    for(int i = 0; i < n; i++) {
        ll int sum = 0;
        for(int j = 0; j < m; j++) {
            sum = keyB[i] + usb[j];
            if(sum <= b) {
                //cout << keyB[i] << " + " << usb[j] << " = " << sum << "\n";
                res = max(res, sum);
            }
            else {
                continue;
            }
            
        }
    }


    return res;
}

int main() {
    ll int budget;
    int n, m;
    cin >> budget >> n >> m;

    int keyboard[n];
    int usb[m];
    for(int i = 0; i < n; i++) {
        cin >> keyboard[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> usb[i];
    }

    cout << getMoneySpent(keyboard, n, usb, m, budget) << "\n";
    return 0;
}
