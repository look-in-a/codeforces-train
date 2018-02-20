// 19.02.2018
// http://codeforces.com/contest/922

#include <iostream>

using namespace std;

int main() {

	long long x,y;
	cin >> x >> y;

	y -= 1;

	if (y >= 0 && x - y >= 0 && (x - y) % 2 == 0 && ((x - y)/2 == 0 || y > 0 )) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}

	return 0;
}