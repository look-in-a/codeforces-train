// 26.02.2018
// http://codeforces.com/contest/937

#include <iostream>
#include <set>

using namespace std;

int main() {
	int n;
	cin >> n;
	set<int> scores;
	for (int i = 0; i < n; i++ ) {
		int k;
		cin >> k;
		if (k != 0){
			scores.insert(k);
		}
	}
	cout << scores.size() << "\n";
	return 0;
}
