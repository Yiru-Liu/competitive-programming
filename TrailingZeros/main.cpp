#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int numFives = 0;

	while(n > 0) {
		n /= 5;
		numFives += n;
	}

	cout << numFives;
}
