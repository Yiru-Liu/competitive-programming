#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> nums;

	int input;
	for(int i = 1; i < n; i++) {
		cin >> input;
		nums.push_back(input);\
	}

	sort(nums.begin(), nums.end());

	for(int i = 0; i <= n-2; i++) {
		if(nums[i] != (i+1)) {
			cout << i+1;
			return 0;
		}
	}
	
	cout << n;
	return 0;
}