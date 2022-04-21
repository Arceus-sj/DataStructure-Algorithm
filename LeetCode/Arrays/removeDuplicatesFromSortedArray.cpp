#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());

    nums.clear();

    nums.insert(nums.begin(), s.begin(), s.end());
    
    s.clear();
    reverse(nums.begin(), nums.end());
    sort(nums.begin(), nums.end());
    return nums.size();
}

int main() {
    int n;
    cin >> n;

    vector<int> nums;
    int it;
    for(int i = 0; i<n; i++) {
        cin >> it;
        nums.push_back(it);
    }

    cout << removeDuplicates(nums) << "\n";

    for(auto x:nums) {
        cout << x << " ";
    }
    return 0;
}
