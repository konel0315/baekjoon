#include <iostream>
#include <vector>
using namespace std;

vector <vector <int>> A;

int n, b;
int Q, D, N, P;
int main() {
	cin >> n;
	A.resize(n);
	for (int i = 0; i < n; i++) {
		A[i].resize(4);
	}
	for (int i = 0; i < n; i++) {
		cin >> b;
		Q=0, D=0, N=0,P = 0;
		if (b >= 25) {
			Q = b / 25;
			b = b % 25;
		}
		if (b >= 10) {
			D = b / 10;
			b = b % 10;
		}
		if (b >= 5) {
			N = b / 5;
			b = b % 5;
		}
		if (b >= 1) {
			P = b / 1;
			b = b % 1;
		}
		A[i][0] = Q; A[i][1] = D; A[i][2] = N; A[i][3] = P;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			cout << A[i][j];
			if (j != 3) { cout << " "; }
		}
		cout << "\n";
	}
}