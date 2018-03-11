// 11.03.2018
// http://codeforces.com/contest/887

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int nuls = 0;
	int size = s.size();
	for (int i = size - 1; i >= 0; --i) {
		if (s[i] == '0' && nuls < 6) {
			nuls++;
		} else if (s[i] == '1' && nuls == 6) {
			cout << "yes\n";
			return 0;
		}
	} 
	cout << "no\n";
	return 0;
}
