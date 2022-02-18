#include<iostream>
#include<vector>

using namespace std;

vector<int> find(int *arr, int n, int x) {
    vector<int> res;
    int firstIndex = -1, lastindex = -1;
    
    //first-occurrence
    int firstStart = 0, firstEnd = n - 1;
    while(firstStart <= firstEnd) {
        int mid = firstStart + ((firstEnd - firstStart) / 2);
        
        if(arr[mid] == x) {
            if(arr[mid - 1] == arr[mid]) {
                firstEnd = mid - 1;
            }
            else {
                firstIndex = mid;
                break;
            }
        }
        else if(arr[mid] < x) {
            firstStart = mid + 1; 
        }
        else {
            firstEnd = mid - 1;
        }
        
    }
    
    //second-occurrence
    int lastStart = 0, lastEnd = n - 1;
    while(lastStart <= lastEnd) {
        int mid = lastStart + ((lastEnd - lastStart) / 2);
        
        if(arr[mid] == x) {
            if(arr[mid] == arr[mid + 1]) {
                lastStart = mid + 1;
            }
            else {
                lastindex = mid;
                break;
            }
        }
        else if(arr[mid] < x) {
            lastStart = mid + 1;
        }
        else {
            lastEnd = mid - 1;
        }
    }
    
    
    res.push_back(firstIndex);
    res.push_back(lastindex);
    return res;
}

int main() {
    int n, x;
    cin >> n >> x;
    
    int arr[n];
    vector<int> ans;
    for(int i = 0; i< n; i++) {
        cin >> arr[i];
    }
    
    ans = find(arr, n, x);
    
    for(auto x:ans) {
        cout << x << " "; 
    }
    return 0;
}
