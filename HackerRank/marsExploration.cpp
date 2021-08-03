#include<iostream>
#include<cstring>

using namespace std;

int marsExploration(string s) {
    string str = "SOS";
    int n = s.size();
     
    int countMistake = 0;
     
    
    int i = 0, j = 0, k = 0;
    for(i = 0; i < n; i = i + 3) {
        for(j = i, k = 0; j < i + 3; j++, k++) {
            //cout << s[j] << " == " << str[k] << endl;
            if(s[j] == str[k]) {
                continue;
            }
            else {
                 
                countMistake++;
            }
        }
    }
    return countMistake;
}

int main() {
    string s;
    getline(cin, s);
    // cout << s << endl;
    cout << marsExploration(s) << endl;
    return 0;
}
