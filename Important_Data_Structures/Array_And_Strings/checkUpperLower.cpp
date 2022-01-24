// isupper() function check if the given character is a uppercase or not 
// it defined in <cctype> header file
// if isupper() function is true then return character itself otherwise return 0

#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	for(int i = 0; i < s.length(); i++) {
		
		if(isupper(s[i])) 
			cout << "Uppercase\n";
		else 
			cout << "Lowercase\n";
			
	}
		
	return 0;
} 
