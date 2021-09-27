
#include<iostream>
#include<string>
using namespace std;


void stringLength(string a, string b) {
    cout << a.size() << " " << b.size() << "\n";
}

void stringCon(string a, string b) {
    string ans= a + b;
    cout << ans << "\n";
}

void stringSwap(string& a, string& b) {
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b << "\n";
}

int main()  {
    string A, B;
    cin>>A>>B;
    stringLength(A, B);
    stringCon(A, B);
    stringSwap(A, B);
    return 0;
}
