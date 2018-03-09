// 08.03.2018
// http://codeforces.com/contest/950

#include <iostream>

using namespace std;

int main() {
	int l, r, a;
	cin >> l >> r >> a;
	int comandSize = 2 * min(l,r) + 2 * min(abs(r-l), a);
	a -= min (abs(r-l), a);
	comandSize += a - (a%2);
	cout << comandSize << "\n"; 
	return 0;
}