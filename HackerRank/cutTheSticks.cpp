#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void cutTheStick(vector<int> a) {
    vector<int> c;
    int min = 0, count = 0;
    int n = a.size();
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == 0) 
            continue;
        
        min = a[i];
        count = 0;
        cout << "Min: " << min << " ";
        for(int j = n-1; j >= 0; --j) {
            if(a[j] == 0)
                continue;
            else
                count++;
            a[j] = a[j] - min;
            
        }
        cout << "| Stick Cut: " << count << "\n";
    }
    
    
}

int main() {
    int n;
    cin >> n;
    vector<int> a;
    int item;
    for(int i = 0; i < n; i++) {
        cin >> item;
        a.push_back(item);
    }

    sort(a.begin(), a.end());

    cutTheStick(a);
    return 0;
}
