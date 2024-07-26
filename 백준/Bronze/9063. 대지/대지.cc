#include <iostream>
#include <vector>
using namespace std;

vector <int> X;
vector <int> Y;
int N;
int main() {
	cin >> N;
	X.resize(N);
	Y.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> X[i];
		cin >> Y[i];
	}
	int max = -10001;
	int min = 10001;
	for (int i = 0; i < N; i++) {
		
		if (max<X[i]){max = X[i];}
		if (min>X[i]) {min = X[i];}
	}
	int x = max - min;
	max = -10001;
	min = 10001;
	for (int i = 0; i < N; i++) {

		if (max < Y[i]) { max = Y[i]; }
		if (min > Y[i]) { min = Y[i]; }
	}
	int y = max - min;
	cout << x * y;
}