#include <iostream>
using namespace std;
/*
int32_t howManyTimesDivisibleBy(int dividend, int divisor) {
	int32_t times = 0;

	while(dividend % divisor == 0) {
		dividend /= divisor;
		times++;
	}
	return times;
}*/

/*int32_t howManyTimesDivisibleByTwo(int dividend) {
	int32_t times = 0;

	while((dividend & 1) == 0) {
		dividend >>= 1;
		times++;
	}
	return times;
}*/

int32_t howManyTimesDivisibleByFive(int dividend) {
	int32_t times = 0;

	while(dividend % 5 == 0) {
		dividend *= 0.2;
		times++;
	}
	return times;
}

int main() {
	int n;
	cin >> n;

	//int numTwos = 0;
	int numFives = 0;

	for(int i = 1; i <= n; i++) {
		//numTwos += howManyTimesDivisibleByTwo(i);
		numFives += howManyTimesDivisibleByFive(i);
	}

	cout << /*min(numTwos, */numFives;
}
