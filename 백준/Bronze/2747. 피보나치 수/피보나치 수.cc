#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int n;
	
int fibo(int n) {
	if (v.size() > n) { 		
		return v[n]; }
	else{
		int value = fibo(n - 1) + fibo(n-2);
		v.push_back(value);
		return value;
	}
}


int main() {
	cin >> n;
	v.push_back(0);
	v.push_back(1);
	cout << fibo(n) << endl;
	}
