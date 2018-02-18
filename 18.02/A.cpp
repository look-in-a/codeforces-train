// 18/02/2018
// http://codeforces.com/contest/934

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<long long> a(n), b(m);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	long long minmax = 2e18; 
	for (int i = 0; i < n; i++) {
		long long mx = -2e18;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (j != i) {
					mx = max(mx, a[j] * b[k]);
				}
			}
		}
		minmax = min(mx, minmax);
	}

	cout << minmax << "\n";

	return 0;
}
