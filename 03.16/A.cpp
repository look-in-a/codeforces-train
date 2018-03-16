// 16.03.2018
// http://codeforces.com/contest/877
// #442

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	const vector<string> names {"Danil", "Olya", "Slava", "Ann", "Nikita"};
	string str;
	cin >> str;
	int count = 0;
	for (auto& name : names) {
		if (str.find(name) < str.size()) {
			if  (str.find(name) == str.rfind(name)) {
				count++;
			} else{
				count += 2;
			}
		}
	}
	if (count == 1) {
		cout << "YES\n";	
	} else {
		cout << "NO\n";
	}
	return 0;
}