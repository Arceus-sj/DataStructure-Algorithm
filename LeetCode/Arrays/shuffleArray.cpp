#include<iostream>
#include<vector>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> a(n*2);
    for(int i = 0, j = 0, k = n; i < (n*2); i++) {
        if(i % 2 == 0) {
            a[i] = nums[j];
            j++;
        }
        else {
            a[i] = nums[k];
            k++;
        }

    }

    return a;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums;
    vector<int> ans(n*2);
    int x;
    for(int i = 0; i < (n*2); i++) {
        cin >> x;
        nums.push_back(x);
    }

    ans = shuffle(nums, n);

    for(int i = 0; i < n*2; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}
