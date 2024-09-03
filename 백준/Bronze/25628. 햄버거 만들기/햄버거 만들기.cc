#include <iostream>

using namespace std;


int main() {
	int a,b,c=0;
	cin >> a;
	cin >> b;
	while (a > 1 && b != 0) {
		a = a - 2; b = b - 1;
		c++;
	}
	cout << c;
}


