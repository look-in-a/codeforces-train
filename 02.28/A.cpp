// 28.02.2018
// http://codeforces.com/contest/939

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> f (n+1);
	
	for (int i = 1; i <= n; i++) {
		cin >> f[i];
	}

	for (int i = 1; i <= n; i++) {
		vector<bool> v (n+1, false);
		int plane = i;
		int start = i;
		int count = 0;
		while (!v[plane]) {
			v[plane] = true;
			plane = f[plane];
			count++;
		}
		if (count == 3 && plane == start) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}