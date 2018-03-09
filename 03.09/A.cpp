// 09.03.2018
// http://codeforces.com/contest/894

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	int QAQs = 0;
	int size = s.size();
	for (int i = 0; i < size; ++i) {
		for (int j = i+1; j < size; ++j) {
			for (int k = j+1; k < size; ++k) {
				if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q') {
					++QAQs;
				}
			}
		}
	}
	cout << QAQs << "\n";
	return 0;
}