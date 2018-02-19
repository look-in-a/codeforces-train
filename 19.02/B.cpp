// 19.02.2018
// http://codeforces.com/contest/922

#include <iostream>

using namespace std;

int main() {

	unsigned int n;
	cin >> n;

	long long triangleNumber = 0;
	for (unsigned int a = 1; a <= n; a++) {
		for (unsigned int b = a; b <= n; b++) {
			unsigned int c = (a^b);
			if ( c <= n && c >= b && c < a+ b ) {
				triangleNumber += 1;
			}
		}
	}

	cout << triangleNumber << "\n";
	return 0;
}