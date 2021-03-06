// 10.03.2018
// http://codeforces.com/contest/892

#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
    
using namespace std;

int main() {
	long long n;
	cin >>  n;
	vector<long long> b(n, -1);
	
	for (long long i = 0; i < n; ++i) {
		long long a;
		cin >> a;
		b[max(0ll, i - a)]++;
	}
	long long sum = 0;
	long long alive = 0;
	for (long long i = 0; i < n; ++i){
		sum += b[i];
		if (sum == 0) {
			alive++;
		}
	}
	cout << alive << "\n";
	return 0;
}