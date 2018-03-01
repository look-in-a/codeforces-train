// 01.03.2018
// http://codeforces.com/contest/899


#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int couples = 0;
	int singles = 0;
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		if (c == 2) {
			couples++;
		} else {
			singles++;
		}
	}
	int commands = min(couples, singles);
	couples -= commands;
	singles -= commands;
	commands += singles / 3;
	cout << commands << "\n";
	return 0;
}