#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums;
    vector<int> ans(n);
    int a;
     
    for(int i = 0; i < n; i++) {
        cin >> a;
        nums.push_back(a);
    }
    
    for(int i = 0; i < n; i++) {
        ans[i] = nums[nums[i]];
    }
    
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
