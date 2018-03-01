// 01.03.2018
// http://codeforces.com/contest/899
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
	vector<int> months {31,28,31,30,31,30,31,31,30,31,30,31};
	int n;
	cin >> n;
	set<vector<int>> variants;
	vector<int> l (n);
	for (int i = 0; i < n; ++i) {
		int ll;
		cin >> ll;
		l[i] = ll;
	}

	for (int i = 0; i < 12; ++i) {
		vector<int> a (n);
		vector<int> febs (2,-1);
		for (int j = 0; j < n; ++j) {
			a[j] = months[(i + j) % 12];
			if ((i + j) % 12 == 1){
				if (febs[0] == -1) {
					febs[0] = j;
				} else {
					febs[1] = j;
				}
			}
		}
		variants.insert(a);

		for (int i = 0; i < 2; ++i) {
			if (febs[i] != -1) {
				a[febs[i]] = 29;
				variants.insert(a);
				a[febs[i]] = 28;
			}
		} 
	}

	if (variants.find(l) != variants.end()) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
	return 0;
}