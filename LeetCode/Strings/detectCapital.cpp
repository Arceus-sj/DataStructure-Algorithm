// isupper() function check if the given character is a uppercase or not 
// it defined in <cctype> header file
// if isupper() function is true then return character itself otherwise return 0

#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

bool detectCapitalUse(string word) {
	
	int n = word.length();
	int countUpper = 0;
	int countLower = 0;
	
	bool firstLetter = false;
	
	for(int i = 0; i < n; i++) {
		if(isupper(word[i])) { 
			countUpper++;
			
		}
		else if(islower(word[i])) {
			countLower++;
		}
		
		if(i == 0 && isupper(word[0]))
			firstLetter = true;
					
	}
	
	
	if(countUpper == n || countLower == n || (firstLetter == true && countLower == n-1)) 
		return true;
	
	
	return false;
	
}

int main() {
	string word;
	getline(cin, word);
	
	cout << boolalpha << detectCapitalUse(word) << "\n";
		
	return 0;
} 
