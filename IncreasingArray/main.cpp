#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int64_t numMoves = 0;
	for(int i = 1; i < n; i++) {
		if(arr[i] < arr[i-1]) {
			numMoves += (arr[i-1] - arr[i]);
			arr[i] = arr[i-1];
		}
	}
	
	cout << numMoves;
}