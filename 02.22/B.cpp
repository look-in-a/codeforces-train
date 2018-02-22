// 22.02.2018 
// http://codeforces.com/contest/918

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	map<string, string> names;
	for (int i = 0; i < n; i++) {
		string name, ip;
		cin >> name >> ip;
		names[ip] = name;
	}
	for (int i = 0; i < m; i++){
		string command, ip;
		cin >> command >> ip;
		ip.erase(ip.end() - 1);
		cout << command << " " << ip << "; #" << names[ip] << "\n";
	}

	return 0;
}