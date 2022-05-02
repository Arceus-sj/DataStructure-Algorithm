#include <iostream>
#include <vector>

using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,0);

    int startIndex = 0;
    int endIndex = n - 1;
    for(int i = 0;(startIndex <= n-1 || endIndex >= 0) && i < n; i++) {
        if(nums[i] % 2 != 0) {
            ans[endIndex] = nums[i];
            endIndex--;
        }
        else {
            ans[startIndex] = nums[i];
            startIndex++;
        }
    }

    return ans;
}

int main() {
    int n; cin >> n;

    vector<int> nums;

    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        nums.push_back(val);
    }


    vector<int> ans = sortArrayByParity(nums);

    for(auto x:ans) {
        cout << x << " ";
    }

    return 0;
}
