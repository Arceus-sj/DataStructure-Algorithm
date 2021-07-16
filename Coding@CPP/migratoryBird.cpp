#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    

    int n;// no. of birds present
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

     
 

    int countArray[6] = {0};
    int max = 0;
    int ans = 0;

    for(int i=0;i<n;i++) {
        int id = a[i];

        countArray[id]++;


        if(countArray[id] > max) {
            max = countArray[id];
            ans = id;
        }
        else if(countArray[id] == max) {
            ans = min(ans, id);
        }
    }

    for(int i=1;i<=5;i++){
        cout << "Type " << i << " = " << countArray[i] << endl;
    }

    cout << ans << endl;
    
    return 0;
}
