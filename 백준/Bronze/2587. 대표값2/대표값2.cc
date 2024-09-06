#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector <int> v;
	int t;
	for (int i = 0; i < 5; i++) {
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	int av = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;
	cout << av <<"\n" << v[2];


}


