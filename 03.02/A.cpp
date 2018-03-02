// 02.03.2018
// http://codeforces.com/contest/898
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	n -= n % 5;
	if (n % 10 == 5) {
		n += 5;
	}
	cout << n << "\n";
	return 0;
}