// 24.02.2018
// http://codeforces.com/contest/912

#include <iostream>

using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;

	long long d = 1;
	while ( d <= n) {
		d *= 2;
	}

	long long max = n;

	if (k > 1) {
		max = d - 1;
	}

	cout << max << "\n";
	return 0;
}