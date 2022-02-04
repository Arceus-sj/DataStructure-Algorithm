#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for(int row = 0; row < n; row++) {
		for(int col = 0; col < m; col++) {
			cin >> arr[row][col];
		}
	}
	
	for(int col = 0; col < m; col++) {
		if(col % 2 == 0) { // even column 
			for(int row = 0; row <= n - 1; row++) {
				cout << arr[row][col] << " ";
			}
		}
		else { // odd column
			for(int row = n - 1; row >= 0; --row) {
				cout << arr[row][col] << " ";
			}
		}
		
	}
	return 0;
}
