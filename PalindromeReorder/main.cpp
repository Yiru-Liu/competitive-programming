#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int32_t charFreqs[26] = {};
	for(char c : s) {
		charFreqs[c - 'A']++;
	}

	char middleChar = 0;
	for(int8_t i = 0; i < 26; i++) {
		if(charFreqs[i] % 2) {
			if(middleChar != 0) {
				cout << "NO SOLUTION";
				return 0;
			}
			middleChar = i + 'A';
		}
	}

	string palindrome = "";
	for(char letter = 'A'; letter <= 'Z'; letter++) {
		while(charFreqs[letter - 'A'] > 1) {
			palindrome.push_back(letter);
			charFreqs[letter - 'A'] -= 2;
		}
	}
	if(middleChar == 0) {
		for(int32_t i = palindrome.length() - 1; i >= 0; i--) {
			palindrome.push_back(palindrome.at(i));
		} 
	} else {
		palindrome.push_back(middleChar);
		for(int32_t i = palindrome.length() - 2; i >= 0; i--) {
			palindrome.push_back(palindrome.at(i));
		} 
	}
	cout << palindrome;
}
