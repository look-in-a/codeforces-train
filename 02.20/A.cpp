// 20.02.1018
// http://codeforces.com/contest/919
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n,m;
	cin >> n >> m;

	vector<double> prices (n);
	for (int i = 0; i < n; i++) {
		double a,b;
		cin >> a >> b;
		prices[i] = m*a/b;
	}
	sort(prices.begin(), prices.end());
	cout.precision(10);
	cout << prices[0];

	return 0;
}