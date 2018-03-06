// 06.03.2018
// http://codeforces.com/contest/946/problem/0

#include <iostream>

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	while (1) {
		if ( a == 0 || b == 0) {
			break;
		} else if (a >= 2*b) {
			a %= 2*b;
		} else if ( b >= 2*a) {
			b %= 2*a;
		} else {
			break;
		}
	}
	cout << a << " " << b << "\n";
	return 0;
}