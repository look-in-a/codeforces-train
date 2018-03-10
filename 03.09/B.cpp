// 09.03.2018
// http://codeforces.com/contest/894

#include <iostream>
#include <string>

using namespace std;

int main(){
	long long mod = 1000000006;
	unsigned long long thirty = 73741817;
	
	long long  n, m, k;
	cin >> n >> m >> k;
	if (k == -1 && n%2 != m%2) {
		cout << 0 << "\n";
	} else {
		n--;
		m--;
		n %= mod;
		m %= mod;
		unsigned long long dim = n * m;
		dim %= mod;
		unsigned long long result = 1;
		for (unsigned i = 0; i < dim/30; ++i) {
			result *= thirty;
			result %= mod + 1;
		}
		for (unsigned i = 0; i < dim % 30; ++i) {
			result *= 2;
			result %= mod + 1;
		}
		cout << result << "\n";
	}
	return 0;
}