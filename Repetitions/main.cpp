#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;

	char prevC = 0;
	int numReps = 0;
	int maxNumReps = 0;
	for(char c : s) {
		if(c != prevC) {
			prevC = c;
			if(numReps > maxNumReps) {
				maxNumReps = numReps;
			}
			numReps = 0;
		}
		numReps++;
	}

	
	cout << max(numReps, maxNumReps);
}