// 10.03.2018
// http://codeforces.com/contest/892

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >>  n;
	vector<int> b(n);

	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		sum += a;
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	sort(b.begin(), b.end(), [](int a, int b){return a > b;});
	if (b[0] + b[1] >= sum) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}


	return 0;
}
