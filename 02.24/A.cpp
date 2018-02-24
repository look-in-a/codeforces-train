// 24.02.2018
// http://codeforces.com/contest/912

#include <iostream>

using namespace std;

int main() {

	long long x, y, a, b, c;
	
	cin >> x >> y;
	cin >> a >> b >> c;

	long long n = std::max(0ll, 2*a + b - x) + std::max(0ll, b + 3*c - y);
	cout << n << "\n";
	
	return 0;
}