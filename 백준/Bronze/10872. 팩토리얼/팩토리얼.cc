#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int a,c=1;
	cin >> a;
	for (int i = 1; i < a + 1;i++) {
		c *= i;
	}
	cout << c;
}


