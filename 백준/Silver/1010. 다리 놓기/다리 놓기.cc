#include <iostream>
#include <vector>
using namespace std;

vector<long long> v;
int a, m, n;
long long sum;
int main() {
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> n;
		cin >> m;
		long long u = m;
		long long r = n;
		int k = n - 1;
		for (int j = 0; j < k; j++) {
			u = u * --m;
			r = r * --n;
			while(u % 2 == 0 && r % 2 == 0) {
				u = u / 2; r = r / 2;
			}
			while (u % 3 == 0 && r % 3 == 0) {
				u = u / 3; r = r / 3;
			}
			while (u % 5 == 0 && r % 5 == 0) {
				u = u / 5; r = r / 5;
			}

		}
		sum = u / r;
		v.push_back(sum);
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}