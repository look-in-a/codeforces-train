// 18/02/2018
// http://codeforces.com/contest/934

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const long long MAX = 1'000'000'000'000'000'000;

int main() {
	int k;
	cin >> k;

	long long n = 0;

	while (k > 0) {
		if (k > 1) {
			n *= 10;
			n += 8;
			k -= 2;
		} else {
			n *= 10;
			n += 4;
			k -= 1;
		}
		if (n > MAX) {
			cout << -1 << "\n";
			return 0;
		}
	}

	cout << n << "\n";

	return 0;
}
