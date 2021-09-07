#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int findNumber(vector<int>& nums) {
    int n = nums.size();
    int countEven = 0;
    for(int i = 0; i < n; i++) {
        int num = floor(log10(nums[i]) + 1);//count total digits
        if(num % 2 == 0)
            countEven++;
        else 
            continue;
    }
    
    return countEven;
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
    
    cout << findNumber(nums) << "\n";
    return 0;
}
