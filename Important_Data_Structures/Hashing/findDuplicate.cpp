#include<iostream>
#include<unordered_set>

using namespace std;

void findDuplicate(int *a, int n) {
    unordered_set<int> intSet;
    unordered_set<int> duplicate;

    for(int i = 0; i < n; i++) {
        if (intSet.find(a[i]) == intSet.end())
            intSet.insert(a[i]);	
        else
            duplicate.insert(a[i]);
    }


    for(auto it = duplicate.begin(); it != duplicate.end(); it++) {
        cout << *it << " ";
    }
}

int main() {
    int a[] = {1,2,8,4,7,2,3,6,1,4,5,9,6,7};
    int n = sizeof(a) / sizeof(int);

    findDuplicate(a, n);
    return 0;
}
