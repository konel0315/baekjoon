#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int t,M=-1000001,m=1000001,k;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >>  k;
		M = max(M, k);
		m = min(m,k);
	}
	cout << m<<" " << M;
}


