// 20.02.1018
// http://codeforces.com/contest/919
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumOfDigits(int n) {
	int sum = 0;
	while (n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int k;
	cin >> k;

	int n = 0;
	int num = 0;

	while (n < k) {
		num++;
		if (sumOfDigits(num) == 10) n++;
	}
	cout << num;
}