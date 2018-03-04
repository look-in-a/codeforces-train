// 05.03.2018
// http://codeforces.com/contest/869
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> x(n), y(n);
	set<int> numbers;
	for (int i = 0; i < n; ++i){
		cin >> x[i];
		numbers.insert(x[i]);
	}
	for (int i = 0; i < n; ++i){
		cin >> y[i];
		numbers.insert(x[i]);
	}
	int count = 0;
	for (auto i : x) {
		for (auto j : y) {
			if (numbers.find(j^i) != numbers.end()){
				count++;
			}
		}
	}
	if (count % 2 == 0) {
		cout << "Karen\n";
	} else {
		cout << "Koyomi\n";
	}
	return 0;
}