#include<iostream>
#include<vector>
#define ll long long

using namespace std;

// Brute force approach
vector<int> findTwoIndex(vector<int> &nums, ll int target) {
    vector<int> index;
    int n = nums.size();
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int sum = nums[i] + nums[j];
            if(sum == target) {
                index.push_back(i);
                index.push_back(j);
                break;
            }
        }
    }
    return index;
}
 

int main() {
    int n;
    ll int target;
    cin >> n >> target;

    vector<int> nums;
    vector<int> ans;
    int it;
    for(int i = 0; i < n; i++) {
        cin >> it;
        nums.push_back(it);
    }

    ans = findTwoIndex(nums, target);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
