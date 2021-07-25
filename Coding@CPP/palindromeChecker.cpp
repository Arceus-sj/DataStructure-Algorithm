#include<iostream>
#include<cstring>

using namespace std;

bool isPalindrome(string s) {
    int strLength = s.length();
     
    int l = s.length() - 1;
    
    if(strLength % 2 == 0) { //even STRING
        for(int i = 0; i < strLength / 2; i++) {
            if(s[i] == s[l]) {
                cout << s[i] << " " << s[l] << endl;
                --l;
            }
            else {
                return false;
            }
        }
    }
    else { //odd STRING
        for(int i = 0; i < (strLength - 1) / 2; i++) {
            if(s[i] == s[l]) {
                cout << s[i] << " " << s[l] << endl;
                --l;
            }
            else {
                return false;
            }
        }
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);

    cout << boolalpha << isPalindrome(str) << endl; 
    return 0;
}

