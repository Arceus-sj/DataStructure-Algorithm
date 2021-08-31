#include<algorithm>
#include<iostream>
#define ll long long

using namespace std;

int minMax(int *a, ll int n, ll int k) {
    ll int res = 0;
    res = a[k - 1] - a[0];
    for(ll int i = 0; i < n + k - 1; i++) {
        ll int temp = a[k - 1 + i] - a[i];
        if(temp < res && temp > 0)
            res = temp;
    }
    return res;
}

int main() {
    ll int n, k;
    cin >> n >> k;

    int a[100010];
    
    for(ll int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);

    cout << minMax(a, n, k) << endl;
    return 0;
}
