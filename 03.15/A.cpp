// 15.03.2018
// http://codeforces.com/contest/864
// #436

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int,int> cards; 
	for (int i = 0; i < n; ++i) {
		int c;
		cin >> c;
		cards[c]++;
	}
	if (cards.size() == 2) {
		auto c1 = cards.begin();
		auto c2 = ++cards.begin();
		if (c1->second == c2->second) {
			cout << "YES\n";
			cout << c1->first << " " << c2->first << "\n";
		} else {
			cout << "NO\n";	
		}
	} else {
		cout << "NO\n";
	}
	return 0;
}