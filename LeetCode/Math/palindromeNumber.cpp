#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(int x) {
    string num = to_string(x);
    int n = num.size();
    for(int i = 0, j = n - 1; i <  n / 2; i++, j--) {
        if(num[i] == num[j])
            continue;
        else 
            return 0;
    }
    
    return 1;
}

int main() {
    int x;
    cin >> x;
    
    cout << boolalpha << isPalindrome(x) << "\n";
    return 0;
}
