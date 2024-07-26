#include <iostream>
#include <vector>
using namespace std;

vector <int> A;

int N;
int cunt = 0;

bool istrue(int num) {
	if (num == 1) { return false; }
	if (num == 2) { return true; }
	if (num%2==0) { return false; }
	for (int k = 3; k < num; k = k + 2) {
		if (num % k == 0) { return false; }
	}
	return true;
}





void sosu(vector<int> A, int N) {
	
	for (int i = 0; i < N; i++) {
		if (istrue(A[i])) { cunt++; }
	}
}



int main() {
	cin >> N;
	A.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sosu(A, N);
	cout << cunt;
}