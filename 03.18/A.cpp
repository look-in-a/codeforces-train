// 18.03.2018
// http://codeforces.com/contest/854
// #433
#include <iostream>
using namespace std;

int GCD(int a, int b) {
	if (a < b) {
		swap(a, b);
	}
	while (b != 0) {
		a %= b;
		if (a < b) {
			swap(a, b);
		}
	}
	return a;
}

int main() {
	int n;
	cin >> n;
	double max = 0;
	int a, b;
	for (int i = 1; i < n-1; ++i) {
		if (GCD(i, n-i) == 1 && i < n-i) {
			double frac = i;
			frac /= (n-i);
			if (frac > max) {
				a = i;
				b = n-i;
			}
		}
	}
	cout << a << " " << b << "\n";
	return 0;
}