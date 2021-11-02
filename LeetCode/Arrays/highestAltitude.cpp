#include<iostream>
#include<vector>

using namespace std;

int largestAltitude(vector<int>& gain) {
	int n = gain.size();
	vector<int> trip(n+1);
	 
	int altitude = 0;
	for(int i = 1; i < n+1; i++) {
		trip[i] = trip[i-1] + gain[i-1];
	}
	
	for(int i = 0; i < n+1; i++) {
		if(altitude < trip[i])
			altitude = trip[i];
	}
	return altitude;
}

int main() {
	int n;
	cin >> n;
	
	vector<int> gain;
	int val;
	for(int i = 0; i<n; i++) {
		cin >> val;
		gain.push_back(val);
	}
	
	int ans = largestAltitude(gain);
	
	cout << ans << "\n"; 
	
	return 0;
}
