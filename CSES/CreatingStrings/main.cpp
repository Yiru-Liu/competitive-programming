#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s;
	vector<string> perms;
	cin >> s;
	sort(s.begin(), s.end());
	do {
		perms.push_back(s);
	} while(next_permutation(s.begin(), s.end()));

	cout << perms.size();
	for(string perm : perms) {
		cout << '\n' << perm;
	}
}
