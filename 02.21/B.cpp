// 21.02.2018  21-27
// http://codeforces.com/contest/916


#include <iostream>

using namespace std;

bool isLucky(int time) {
	int min = time % 60;
	int hour = time / 60;
	return (min % 10 == 7 || hour % 10 == 7);
}

int main() {
	int x, h, m;
	cin >> x >> h >> m;

	int time = h * 60 + m;
	int num = 0;
	while (!isLucky(time)) {
		time-=x;
		if (time < 0) {
			time += 24 * 60;
		}
		num++;
	}
	cout << num << "\n";
	return 0;
}