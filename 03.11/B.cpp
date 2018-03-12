// 11.03.2018
// http://codeforces.com/contest/887

#include <iostream>
#include <set>
#include <vector>
using namespace std;

set<int> numbers;
vector<vector<int>> cubes;
int n;

void makeNumbers(int mask, int num) {
	int full = 1 << n;
	--full;
	if (mask <= full) {
		numbers.insert(num);
	}
	if (mask < full){
		int copyMask = mask;
		for (int i = 0; i < n; ++i) {
			if (copyMask % 2 == 0){
				for (int j = 0; j < 6; ++j) {
					makeNumbers(mask + (1 << i), num*10 + cubes[i][j]);
				}
			}
			copyMask >>= 1;
		}
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		vector<int> vec(6);
		for (auto& v : vec) {
			cin >> v;
		}
		cubes.push_back(vec);
	}	
	makeNumbers(0, 0);
	int mex = 1;
	while (numbers.count(mex)) {
		mex++;
	}
	cout << mex - 1 << "\n";
	return 0;
}
