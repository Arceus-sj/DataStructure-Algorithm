#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int camelcase(string s) {
    int count = 1;

    for(int i=0; i<s.length(); ) {
        if(isupper(s[i])) {
            count++;
            i++;
        }
        else {
            i++;
        }
    }

    return count;
}

int main() {

    string s;
    cin >> s;

    cout << camelcase(s) << endl;
    return 0;
}
