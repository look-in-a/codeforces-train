// 13.03.2018
// http://codeforces.com/contest/835
// #427
#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {
	int  s, v1, v2, t1, t2;
	cin >>  s >> v1 >> v2 >> t1 >> t2;
	int time1 = 2*t1 + s*v1;
	int time2 = 2*t2 + s*v2;
	if (time1 < time2) {
		cout << "First\n";
	} else if (time2 < time1) {
		cout << "Second\n";
	} else {
		cout << "Friendship\n";
	}
	return 0;
}