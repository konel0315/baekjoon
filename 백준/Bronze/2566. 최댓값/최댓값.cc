#include <iostream>
#include <vector>
using namespace std;

vector <vector<int>> A; //2차원 배열
int maxi=-1;
int a, b;
int main() {
	A.resize(9);
	for (int i = 0; i < 9; i++) {
		A[i].resize(9);
	}
	for (int i = 0; i < 9; i++) {
		for (int d = 0; d < 9; d++) {
			cin >> A[i][d];
			if (A[i][d] > maxi) {
				maxi = A[i][d];
				a = i;
				b = d;
			}
		}
	
	}
	cout << maxi << "\n" << a+1<<" "<< b + 1;
}

