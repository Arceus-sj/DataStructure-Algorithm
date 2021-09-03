#include<iostream>
#include<vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = 0;
        for(int j = 0; j <= i; j++) {
            sum += nums[j];
        }
        a[i] = sum;
    }
    return a;
}

int main() {
    int n, a;
    cin >> n;
    vector<int> nums;
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        cin >> a;
        nums.push_back(a);
    }

    ans = runningSum(nums);

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
