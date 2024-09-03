#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main() {
	int a = 1;
	int b = 0;
	while (a!=0) {
		cin >> a;
		b = a;
		while (a > 1) {
			b += --a;
		}
		if (a != 0) {
			v.push_back(b);
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i]<<"\n";
	}
}


