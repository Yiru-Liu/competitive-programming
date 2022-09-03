#include <iostream>
using namespace std;

int16_t n;
int32_t weights[20];

int64_t tryWeights(int16_t ithApple, int64_t s1Weight, int64_t s2Weight) {
	if(ithApple == n) {
		return abs(s1Weight - s2Weight);
	} else {
		return min(tryWeights(ithApple + 1, s1Weight + weights[ithApple], s2Weight), 
				tryWeights(ithApple + 1, s1Weight, s2Weight + weights[ithApple]));
	}
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> weights[i];
	}
	cout << tryWeights(0, 0, 0);
}
