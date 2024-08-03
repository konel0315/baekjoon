#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int num = 1;
int main() {
	
	while (v.size()<=1000) {
		for (int i = 0; i < num; i++) {
			v.push_back(num);
		}
		num++;
	}
	int a, b;
	cin >> a;
	cin >> b;
	int sum = 0;
	for (int i = 0; i < b - a + 1; i++) {
		sum += v[a + i-1];
	}
	cout << sum;
}