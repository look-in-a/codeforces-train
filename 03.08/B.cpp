// 08.03.2018
// http://codeforces.com/contest/950

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> msg1 (n);
	vector<int> msg2 (m);
	for (int i = 0; i < n; ++i) {
		cin >> msg1[i];
	}
	for (int i = 0; i < m; ++i) {
		cin >> msg2[i];
	}
	int files = 0;
	int left1 = 0;
	int left2 = 0;
	int sum1 = msg1[0];
	int sum2 = msg2[0];
	while (left1 < n || left2 < m) {
		if (sum1 < sum2) {
			sum1 += msg1[++left1];
		} else if (sum1 > sum2) {
			sum2 += msg2[++left2];
		} else {
			files++;
			sum1 = msg1[++left1];
			sum2 = msg2[++left2];
		}
	}
	cout << files << "\n";
	return 0;
}