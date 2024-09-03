#include <iostream>

using namespace std;


int main() {
	int a,b=0;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		b += a;
	}
	if (b % 4 == 0) { cout << "N"; }
	else if (b % 4 == 1) { cout << "E"; }
	else if (b % 4 == 2) { cout << "S"; }
	else if (b % 4 == 3) { cout << "W"; }
}


