// 23.02.2018
// http://codeforces.com/contest/935

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 1; i < n; i++) {
		if (n%i == 0) count++;
	}
	cout << count << "\n";

	return 0;
}