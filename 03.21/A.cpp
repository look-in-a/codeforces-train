// 21.03.2018
// http://codeforces.com/contest/842
// #430
#include <iostream>

using namespace std;
int main() {
	int l, r, x, y, k;
	cin >> l >> r >> x >> y >> k;
	if (max(l/k + (l % k != 0), x) <= min(r/k, y)) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}	
	return 0;
}