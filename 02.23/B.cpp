// 23.02.2018
// http://codeforces.com/contest/935

#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	cin >> s;

	int x = 0;
	int y = 0;
	int count = 0;

	if (s[0] == 'U'){
		y++;
	} else {
		x++;
	}
	bool side = (x>y);

	for (int i = 1; i < n; i++){
		if (s[i] == 'U'){
			y++;
		} else {
			x++;
		}
		if (x != y) {
			if (side != (x > y)){
				count++;
			}
			side = (x>y);
		}
	}

	cout << count << "\n";

	return 0;
}