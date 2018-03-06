// 06.03.2018
// http://codeforces.com/contest/946/problem/0

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int b = 0;
	int c = 0;
	for (int i = 0; i < n; ++i) {
		int k;
		cin >> k;
		if (k >= 0) {
			b += k;
		} else {
			c += k;
		}
	}
	cout << b - c << "\n";
	return 0;
}