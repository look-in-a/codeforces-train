// 25.02.2018
// http://codeforces.com/contest/909

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a (n,0);

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j <= n; j++) {
			for (int k = 0; k <= n; k++) {
				if ((2 * i < 2 * k + 1) && (2 * j > 2 * k + 1)) {
					a[k]++;
				}
			}
		}
	}
	sort(a.begin(), a.end());
	cout << a[n-1] << "\n";

	return 0;
}

