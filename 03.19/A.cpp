// 19.03.2018
// http://codeforces.com/contest/849
// #431
#include <iostream>
#include <vector>
using namespace std;
bool OnlyOdds (const vector<int>& a) {
	if (a.size() % 2 == 0) {
		return false;
	}
	bool onlyOdds = true;
	if (a[0] % 2 == 0) {
		onlyOdds = false;
	}
	if (a[a.size() - 1] % 2 == 0) {
		onlyOdds = false;
	}
	return onlyOdds;
}

int IsGood(const vector<int>& a, int b) {
	if (a.size() == 0 || a[0] % 2 == 0 || a[a.size() - 1] % 2 == 0) {
		return 0;
	}
	if (OnlyOdds(a)) {
		return 1;
	}
	bool isGood = 0; 
	for (auto i = ++a.begin(); i != a.end(); i++) {
			if (OnlyOdds({a.begin(), i})) {
				int n = IsGood({i, a.end()}, ++b % 2);		
				if ( n > 0 && (n+1) % 2 == b) {
					return n + 1;
				}
			}
	}
	return isGood;
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	IsGood(v, 1) > 0 ? cout << "Yes\n" : cout << "No\n";
	return 0;
}