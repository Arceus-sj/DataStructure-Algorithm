#include<iostream>
#include<algorithm>

using namespace std;

int sockMerchant(int *a, int n) {
    int count = 0;

    sort(a, a+n);


    // for(int i = 0; i < n; i++) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    for(int i = 0; i < n - 1; ) {
        for(int j = i+1; j <= n -1; ) {
            if(a[i] == a[j]) {
                count++;
                i = i + 2;
                j = j + 2;
            }
            else {
                i++;
                j++;
            }
        }
    }    
    return count;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << sockMerchant(a, n) << endl;
    return 0;
}
