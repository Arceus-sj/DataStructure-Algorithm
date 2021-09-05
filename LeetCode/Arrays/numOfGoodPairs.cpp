#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int numIdenticalPair(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int countPair = 0;
    int n = nums.size() ;
    for(int i = 0; i < n ; i++) {
        int value = nums[i];
        for(int j = i + 1; j <= n - 1; j++) {
            if(value == nums[j])
                countPair++;
        }
    }
    return countPair;
} 

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    int a;
    for(int i = 0; i < n; i++) {
        cin >> a;
        nums.push_back(a);
    }
    
    
    cout << numIdenticalPair(nums) << endl;
    return 0;
}
