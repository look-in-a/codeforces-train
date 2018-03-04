// 05.03.2018
// http://codeforces.com/contest/869
#include <iostream>

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	int c = 1;
	for (long long i = a+1; i <= b; ++i) {
		c = (c*i) % 10;
		if (c == 0) {
			break;
		}
	} 
	cout << c << "\n";
	return 0;
}