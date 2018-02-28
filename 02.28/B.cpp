// 28.02.2018
// http://codeforces.com/contest/939

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;
	vector<long long> boxes (k);
	
	for (long long i = 0; i < k; ++i) {
		cin >> boxes[i];
	}

	map<long long, long long> a;
	for (int i = 0; i < k; ++i) {
		a[n % boxes[i]] = i;
	}
	long long i = a.begin()->second;
	long long b = n / boxes[i];
	cout << i + 1 << " " << b << "\n";

	return 0;
}