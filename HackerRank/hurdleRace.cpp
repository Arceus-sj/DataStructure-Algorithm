#include<iostream>
#include<climits>

using namespace std;

int findMaxHeight(int *a, int n) {
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    
    return max;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    int height[n];
    for(int i = 0; i < n; i++) {
        cin >> height[i];
    }    
    
    int maxHeight = findMaxHeight(height, n);
    int res = 0;
    if(maxHeight > k) {
        res = maxHeight - k;
        cout << res << endl;
    }
    else {
        cout << res << endl;
    }
    return 0;
}
