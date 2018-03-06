// 03.03.2018
// http://codeforces.com/contest/900

#include <iostream>

using namespace std;

int length (int n) {
	int len = 0;
	if (n == 0){
		len = 1;
	}
	while (n > 0) {
		len++;
		n /= 10;
	}
	return len;
}

int indexFromEnd (int n, int c) {
	int pos = 0;
	int index = -1;
	if (n == 0 && c == 0) {
		index = 0;
	} 
	while (n > 0) {
		if (n % 10 == c ) {
			index = pos;
		}
		pos++;
		n /= 10;
	}
	return index;
}


int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int len = 0;
	for (int i = 0; i <= b + 1 ; ++i) {
		a *= 10;
		int d = a / b;
		len += length(d);
		int index = indexFromEnd(d, c);
		if (index > -1) {
			cout << len - index << "\n";
			return 0;
		}
		a %= b;
	}
	cout << "-1\n";
	return 0;
}
