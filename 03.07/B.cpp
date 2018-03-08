// 07.03.2018
// http://codeforces.com/contest/895

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int cnt;

int main () {
	int n, x, k;
	cin >> n >> x >> k;
	map<int,int> a;
	map<int, int> a1;
	for (int i = 0; i < n; ++i ) {
		int b;
		cin >> b;
		++a[b];
	}
	long long cnt = 0;
	for (auto i = a.rbegin(); i != a.rend(); ++i) {
		if (i->first % x != 0 || k != 0) {
			a1[i->first / x] += i->second;
		}
		int b = k + (i->first - 1)/x;
		long long second = i->second;
		cnt += second * a1[b];
	}
	cout << cnt << "\n";
	return 0;
}