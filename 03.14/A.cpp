// http://codeforces.com/contest/879
//

#include <iostream>
#include <vector>
using namespace std;


int findNearest(int day, int s, int d) {
	int result = s;
	while (result < day) {
		result += d;
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	vector<int> s(n);
	vector<int> d(n);
	for (int i = 0; i < n; ++i) {
		cin >> s[i] >> d[i];
	}
	int day = 0;
	for (int i = 0; i < n; ++i) {
		day = findNearest(day, s[i], d[i]);
		day++;
	}
	cout << --day << "\n";
	return 0;
}