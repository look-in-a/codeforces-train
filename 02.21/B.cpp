// 21.02.2018 
// http://codeforces.com/contest/916

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
	map<long long,long long> degrees;
	long long n, k, r, deg, max;
	cin >> n >> k;

	r = 0;
	deg = 0;
	while (n > 0) {
		if (n % 2 == 1) {
			degrees[deg] = 1;
			max = deg;
			r++;
		}
		n /= 2;
		deg++;
	}

	if (r > k) {
		cout << "No" << "\n";
		return 0;
	}
	cout << "Yes" << "\n";

	while (degrees[max] <= k-r){
		degrees[max - 1] += 2 * degrees[max];
		r += degrees[max];
		degrees.erase(max);
		max--;
	}

	vector<long long> degreesVec;
	for (auto i : degrees) {
		degreesVec.push_back(i.first);
	} 
	sort(degreesVec.begin(), degreesVec.end());
	int min = degreesVec[0];
	
	while (r < k) {
		degrees[min - 1] += 2;
		degrees[min] -= 1;
		min--;
		r++;
	}

	vector<long long> degreesVec2;
	for (auto i : degrees) {
		degreesVec2.push_back(i.first);
	}

	long  long size = degreesVec2.size();
	for (long long i  = size - 1; i >= 0; i--) {
		for (long long j = 0; j < degrees[degreesVec2[i]]; j++) {
			cout << degreesVec2[i] << " ";
		}
	}

	cout << "\n";
	return 0;
}