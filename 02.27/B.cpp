// 27.02.2018
// http://codeforces.com/contest/839

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int center = n;
	int edge = 2 * n;
	int isolated = 0;

	vector<int> a(k);
	for (int i = 0; i < k; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	for (int i = k-1; i >= 0; --i) {
		int toCenter = min(a[i]/4, center);
		a[i] -= 4 * toCenter;
		center -= toCenter;
		if (a[i] == 3 && center > 0){
			a[i] = 0;
			center--;
		}
		int toEdge = min(a[i]/2, edge);
		a[i] -= 2 * toEdge;
		edge -= toEdge;
		while (a[i] > 0 && (center > 0 || edge > 0 || isolated > 0)) {
			if (center > 0) {
				if (a[i] == 2) {
					isolated++;
				} else if (a[i] == 1) {
					edge++;
				}
				center--;
				a[i] -= min(a[i], 4);
			} else if (isolated > 0) {
				isolated --;
				a[i]--;
			} else if (edge > 0){
				edge--;
				a[i] -= min(2, a[i]);
			}
		}
		if (a[i] > 0) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}