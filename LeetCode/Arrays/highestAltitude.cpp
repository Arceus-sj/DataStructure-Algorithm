#include<iostream>
#include<vector>

using namespace std;

int largestAltitude(vector<int>& gain) {
    int n = gain.size();
    int maxAlt = 0, altitude = 0;
    for(int i = 0; i < n; i++) {
        altitude = altitude + gain[i];
        if(maxAlt < altitude)
            maxAlt = altitude;
    }
    
    return maxAlt;
}

int main() {
    int n;
    cin >> n;
    vector<int> gain;
    int a;
    for(int i = 0; i < n; i++) {
        cin >> a;
        gain.push_back(a);
    }
    
    cout << largestAltitude(gain) << "\n";
    return 0;
}
