// 17.03.2018
// http://codeforces.com/contest/862
// #435

#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	int count = 0;
	bool containsX = false;
	for (int i = 0; i < n; ++i) {
		int c;
		cin >> c;
		count += c < x;
		if (c == x) {
			containsX = true;
		}
	}
	cout << x - count + containsX << "\n";
	return 0;
}