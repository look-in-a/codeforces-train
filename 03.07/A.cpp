// 07.03.2018
// http://codeforces.com/contest/895

#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n;
	cin >> n;
	vector<int> pizza(n);
	for (int i = 0; i < n; ++i) {
		cin >> pizza[i];
	}
	int mn = 360;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int sum = 0;
			//cout << i << " " << j << " : ";
			if (i <= j) {
				for (int k = i; k <= j; ++k){
					sum += pizza[k];
				}
			} else {
				for (int k = j; k < n; ++ k) {
					sum += pizza[k];
				}
				for (int k = 0; k <= i; ++k) {
					sum += pizza[k];
				}
			}
			//cout << sum << "\n";
			mn = min(mn, abs(360 - 2*sum));
		}
	}
	cout << mn << "\n";
	return 0;
}