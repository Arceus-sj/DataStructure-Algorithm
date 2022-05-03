#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 0);

    for(int i = 0, firstIndex = 0, lastIndex = n - 1; i < n; i++) {
        if(nums[i] == 0) {
            ans[lastIndex] = nums[i];
            lastIndex--;
        }
        else {
            ans[firstIndex] = nums[i];
            firstIndex++;
        }
    }
    
    nums.clear();
    nums = ans;
    ans.clear();
    
    for(auto x:nums) {
        cout << x << " ";
    }
}

int main() {
    int n; cin >> n;

    vector<int> nums;

    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        nums.push_back(val);
    }

    moveZeroes(nums);
    return 0;
}
