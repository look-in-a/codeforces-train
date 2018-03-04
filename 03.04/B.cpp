// 04.03.2018
// http://codeforces.com/contest/897
#include <iostream>
#include <vector>

using namespace std;

long long ZCY (int n) {
	vector<int> a;
	while (n > 0) {
		a.push_back(n % 10);
		n /= 10;
	}
	long long zcy = 0;
	long long factor = 1;
	for (int i = a.size() - 1; i >= 0; --i) {
		zcy += a[i] * factor;
		factor *= 10;
	}
	for (size_t i = 0; i < a.size(); ++i) {
		zcy += a[i] * factor;
		factor *= 10;
	}
	return zcy;
}

int main() {
	int k, p;
	cin >> k >> p;
	long long sum = 0;
	for (int i = 1; i <= k; ++i) {
		sum += ZCY(i);
		sum %= p;
	}
	cout << sum << "\n";
	return 0;
}