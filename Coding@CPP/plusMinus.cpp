#include<iostream>
#include<iomanip>

using namespace std;

void findPlusMinus(int *a, int n) {
    double countPositive = 0;
    double countNegitive = 0;
    double countZero = 0;

    for(int i=0;i<n;i++) {
        if(a[i] == 0) 
            countZero++;
        else if(a[i] > 0)
            countPositive++;
        else
            countNegitive++;
    }    

    // cout << "Plus " << countPositive << endl;
    // cout << "Minus " << countNegitive << endl;
    // cout << "Zero " << countZero << endl;

    double plusAns = countPositive / n;
    double minusAns = countNegitive / n;
    double zeroAns = countZero / n;

    

    cout << fixed << setprecision(6) << plusAns << endl;
    cout << fixed << setprecision(6) << minusAns << endl;
    cout << fixed << setprecision(6) << zeroAns << endl;

}

int main() {

    int n;
    cin >> n;
    
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    findPlusMinus(a, n);
    return 0;
}
