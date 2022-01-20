#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> index;
   
    for(int i = 0; i < n; i++) {
        if(nums[i] != target) {
            continue;
        }
        else {
            index.push_back(i);
            
        }
    }
    
    int countTarget = index.size();
    
    if(countTarget == 0) {
        index.push_back(-1);
        index.push_back(-1);
        return index;
    } 
    else if(index.size() == 1) {
        index.push_back(index[0]);
        return index;
    }
    else if(countTarget > 1) {
        index.erase(index.begin()+1, index.begin() + (countTarget - 1));
    }

    return index;
}

int main() {
    int n, target;
    cin >> n >> target;
    
    vector<int> nums;
    vector<int> ans;
    int it;
    for(int i = 0; i < n; i++) {
        cin >> it;
        nums.push_back(it);
    }
    
    ans = searchRange(nums, target);
    
    for(auto x:ans) {
        cout << x << " ";
    }
    
    return 0;
}
