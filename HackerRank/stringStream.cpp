#include<iostream>
#include<cstring>

using namespace std;

void parseints(string s) {

    for(int i=0; i<s.length(); ) {
        if(s[i] == ',') {
            cout << endl;
            i++;
            continue;
        }
        else {
            cout << s[i];
            i++;
        }
    }
}

int main() {

    string s;
    cin >> s;

    parseints(s);
    return 0;
}
