#include<iostream>
#include<cmath>

using namespace std;

int absolute(int I);

int main() {
    int T;    // number of testcases
    cin >> T;  
    while (T--) {
        int I;
        cin >> I;
        cout << absolute(I) << endl;  
    }
    return 0;
}


int absolute(int I) {
     
    if(I < 0){
        I = I * (-1);
        return I;
    }
    else{
        return I;
    }
}
