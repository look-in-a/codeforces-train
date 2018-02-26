// 27.02.2018
// http://codeforces.com/contest/839

#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int days = 0;
	int sweets = 0;
	for (int i = 0; i < n; ++i) {
		int sw;
		cin >> sw;
		if (k > 0) {
			sweets += sw;
			int toBran = min(min(8, sweets), k); 
			k -= toBran;
			sweets -= toBran;
			days++;
		}
		if (k == 0){
			cout << days << "\n";
			return 0;
		}
	}
	cout << -1 << "\n";
	return 0;
}