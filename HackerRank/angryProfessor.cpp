#include<iostream>
#include<algorithm>
using namespace std;

void angryProfessor(int *a, int k) {
    if(a[k-1] <= 0)
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) { 
        int n, k;
        int a[n];
        cin >> n >> k;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        angryProfessor(a, k);
         
    }
    return 0;
}
