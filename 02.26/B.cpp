// 26.02.2018
// http://codeforces.com/contest/937

#include <iostream>

using namespace std;

int main() {
	long long p, y;
	cin >> p >> y;

	for (long long i = y; i >= p+1; i--) {
		bool notDevided = true;
		for (int j = 2; j <=  p && j*j <= i; j++){
			if (i % j == 0) {
				notDevided = false;
				break;
			}
		}
		if (notDevided) {
			cout << i << "\n";
			return 0;
		}
	}
	cout << -1 << "\n";
	return 0;
}
