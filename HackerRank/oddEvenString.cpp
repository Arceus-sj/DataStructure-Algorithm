#include<iostream>
#include<cstring>

using namespace std;

int main() {
    
    int testCase;
    cin>>testCase;
    while(testCase--){
    string s;
    cin >> s;
 
    string oddC;
    string evenC;
    for(int i=0; i<s.length(); i++) {
        if(i%2 == 0) 
            oddC.push_back(s[i]);
        else
            evenC.push_back(s[i]);
    }

    cout  << oddC << " " << evenC << endl;
    }
    return 0;
}
