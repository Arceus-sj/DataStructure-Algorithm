#include<iostream>
#include<cmath>

using namespace std;

double find_nth(int n1, int n2, int nth){
    double ans = 0;
    double r = (double)n2 / (double)n1; // common difference
    
    ans =  n1 * (double)pow(r, nth - 1);
    return ans;
    
}

int main()
{
    int num1, num2;
    cin>>num1>>num2; //first & second term
    
    int n_th_term;
    cin>>n_th_term;
    
    cout<< floor(find_nth(num1, num2, n_th_term)) <<endl;
    return 0;
}
