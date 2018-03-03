// 03.03.2018
// http://codeforces.com/contest/900
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int left = 0;
	int right = 0;
	for (int i = 0; i < n; ++i) {
		int x,y;
		cin >> x >> y;
		if (x > 0) {
			right++;
		} else {
			left++;
		}
	}
	if (right <= 1 || left <= 1) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
	return 0;
}