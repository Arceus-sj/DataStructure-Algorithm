#include<iostream>
#include<cmath>
#define ll long long

using namespace std;

ll int additionMod(ll int a, ll int b){
    ll int x = 10, y = 9;
    unsigned ll int ans = 0;
    ans = (a + b) % ((unsigned long)pow(x,y) + 7);
    return ans;
}

int main()
{
    ll int a,b;
    cin>>a>>b;
    
    cout<< additionMod(a,b);
    return 0;
}
