#include<iostream>
#include<unordered_set>

using namespace std;

int main() {
    unordered_set<int> s;

// insert operation
    s.insert(1);
    s.insert(10);
    s.insert(100);
    s.insert(1000);
    s.insert(10000);


// search operation
    int key = 100;
/*
    we can insert the key insted of value
    Syntax--> s.find(key)

*/
    if (s.find(1000) == s.end())
        cout << "Element not found" << "\n";
    else
        cout << "Element found" << "\n";


    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n"; 



// .size() return the current size of set
    cout << "Size of set before clear: " << s.size() << "\n";



/*
    .count(enter_value) count the entered value from set
    In unoredered set only unique element are allowed
    So, it return only 1 or 0
*/

    cout << s.count(100) << "\n";
    cout << s.count(20) << "\n";

    if(s.count(100) == 0) 
        cout << "Element not present" << "\n";
    else
        cout << "Element present" << "\n";

/*
    .erase(enter_value) function
    It erase the entered value from the set 
    or
    We can erase a whole range
*/
    s.erase(100);

    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";


// erase range of element
    s.erase(s.begin(), s.end());

    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";



// .clear function clear out the whole set    
    s.clear();

//    cout << "Size of set after clear: " << s.size() << "\n";

    return 0;
}
