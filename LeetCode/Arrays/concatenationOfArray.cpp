#include<iostream>
#include<vector>

using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> a(2*n);
    a.assign(nums.begin(), nums.end());
    for(int i = 0; i < n; i++) {
        a.push_back(nums[i]);
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    vector<int> ans;
    int a;
    for(int i = 0; i < n; i++) {
        cin >> a;
        nums.push_back(a);
    }

    ans = getConcatenation(nums);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
