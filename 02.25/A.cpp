// 25.02.2018
// http://codeforces.com/contest/909

#include <iostream>

using namespace std;

int main() {
	string name, surname;
	cin >> name >> surname;

	string login = "";
	login += name[0];	
	for (unsigned i = 1; i < name.size(); i++) {
		if (name[i] < surname[0]) {
			login += name[i];
		} else {
			break;
		}
	}
	login += surname[0];
	cout << login << "\n";

	return 0;
}

