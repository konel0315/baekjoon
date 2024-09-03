#include <iostream>

using namespace std;


int main() {
	int a,b,c,d=0;
	cin >> a;
	cin >> b;
	cin >> c;
	while (a > 0 && (b >= 2 || c >= 1)) {
		a--;
		if (b >= 2) { b -= 2; }
		else { c--; }
		d++;
	}
	cout << d;

}


