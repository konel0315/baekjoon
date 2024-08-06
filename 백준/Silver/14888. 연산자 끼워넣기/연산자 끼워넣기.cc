#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

vector<int> v;
vector<int> o;
int n;
int Mmin = INT_MAX, Mmax = INT_MIN;
void permutation(int result, int idx) {
	// 연산자 하나 지우고 i번째 연산자를 사용해 연산후 i++
	//연산자 다시 늘림
	if (idx == n) {
		if (Mmax < result) { Mmax=result; }
		if (Mmin > result) { Mmin=result; }
	}

	for (int i = 0; i < 4; i++) {
		if (o[i]>0) {//i번째 연산자가 존재하면
			o[i]--;
			if (i == 0) { permutation(result+v[idx], idx+1); }
			else if (i == 1) { permutation(result - v[idx], idx + 1); }
			else if (i == 2) { permutation(result * v[idx], idx + 1); }
			else  { permutation(result / v[idx], idx + 1); }
			o[i]++;
		}
	}
}



int main() {
	cin >> n;
	v.resize(n);
	o.resize(4);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> o[i];
	}
	permutation(v[0], 1);
	cout << Mmax << '\n';
	cout << Mmin;
}