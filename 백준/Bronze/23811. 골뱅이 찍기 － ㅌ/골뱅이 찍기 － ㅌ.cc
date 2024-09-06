#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t = 0;
	int swith = -1;
	cin >> t;
	for (int j = 0; j < 5*t; j++) {
		if (j % t == 0 && j > 0) { swith = swith * -1; }
		for (int i = 0; i < 5 * t; i++) {
			if (swith == -1||i<t) {
				cout << "@";
			}
			else { break; }
		}
		cout << "\n";
		
	}
}


