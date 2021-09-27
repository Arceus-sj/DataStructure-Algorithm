#include<iostream>
#include<sstream>
#include<vector> 
using namespace std;


int main()  {
    string A;
    cin>>A;
    
    int n = A.size();
    stringstream ss(A);
    vector<string> ch(n);
    
    int i = 0;
    while(ss.good()) {
        string a;
        getline(ss, a, ',');
        ch[i]=a;
        i++;
    }

    for(int i = 0; i < ch.size(); i++) {
        cout << ch[i] << "\n";
    }
    return 0;
}
