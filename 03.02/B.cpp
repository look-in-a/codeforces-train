// 02.03.2018
// http://codeforces.com/contest/898
#include <iostream>

using namespace std;


int main() {
	int n, a, b;
	cin >> n >> a >> b;
	for (int i = 0; i <= n / max (a,b); ++i) {
		if (n - i * max(a,b) >= 0 && (n - i * max(a,b)) % min(a,b) == 0) {
			if (a > b) {
				cout << "YES\n" << i << " " << (n - i*a)/b << "\n";
			} else {
				cout << "YES\n" << (n - i*b)/a << " " << i << "\n";
			}
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}