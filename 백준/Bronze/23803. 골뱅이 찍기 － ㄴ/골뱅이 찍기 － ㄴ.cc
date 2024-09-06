#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t = 0;
	cin >> t;
	for (int j = 0; j < 5*t; j++) {
		for (int i = 0; i < 5 * t; i++) {
			if (i > t - 1 && j < (5 * t) - t) { break; }
			else { cout << "@"; }
		}
		cout << "\n";
	}
}


