#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int maxCandies = *max_element(candies.begin(), candies.end());
    int n = candies.size();
    vector<bool> a(n);
    //cout << "Max Candies: " << maxCandies << "\n";
    
    cout << boolalpha;
    for(int i = 0; i < n; i++) {
        candies[i] += extraCandies;
        if(candies[i] >= maxCandies) {
            a[i] = true;
            continue;
        }
        else {
            a[i] = false;
            continue;
        }
    }
    return a;   
}

int main() {
    int n, extraCandies;
    cin >> n >> extraCandies;
    vector<int> candies;
    vector<bool> ans(n);
    int it;
    for(int i = 0; i < n; i++) {
        cin >> it;
        candies.push_back(it);
    }

    ans = kidsWithCandies(candies, extraCandies);
    
    
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";  
    }
    cout << "\n";
    return 0;
}
