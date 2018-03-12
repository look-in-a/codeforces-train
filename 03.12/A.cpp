// 12.03.2018
// http://codeforces.com/contest/841
// #429
#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	map<int, int> balls;
	int mx = 0;
	for (int i = 0; i < n; ++i) {
		balls[s[i]]++;
		mx = max(mx, balls[s[i]]);
	}
	if (mx > k) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}
	

	return 0;
}