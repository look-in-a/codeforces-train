// 22.02.2018 
// http://codeforces.com/contest/918

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<bool> isFib (n+1);
	int f1, f2;
	f1 = 1;
	f2 = 1;
	while (f2 <= n) {
		isFib[f2] = true;
		int f = f1;
		f1 = f2;
		f2 += f;
	}

	for (int i = 1; i <= n; i++) {
		if (isFib[i]){
			cout << "O";
		} else {
			cout << "o";
		}
	}
	cout << "\n";

	return 0;
}