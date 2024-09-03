#include <iostream>

using namespace std;


int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a*2; j++) {
			if (i % 2 == 0 && j % 2 == 0) {
				cout << "*";
			}
			else if (i % 2 != 0 && j % 2 != 0) {
				cout << "*";
			}
			else if(j!=a*2-1){ cout << " "; }
		}
		cout << "\n";
	}

}


