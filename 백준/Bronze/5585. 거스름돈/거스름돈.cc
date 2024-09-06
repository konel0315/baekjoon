#include <iostream>


using namespace std;

int main() {
	int P;
	cin >> P;
	P = 1000 - P;
	int t=0;
	if (P >= 500) { t += P / 500; P = P % 500; }
	if(P >= 100) { t += P / 100; P = P % 100; }
	if (P >= 50) { t += P / 50; P = P % 50; }
	if (P >= 10) { t += P / 10; P = P % 10; }
	if (P >= 5) { t += P / 5; P = P % 5; }
	if (P >= 1) { t += P / 1; P = P % 1; }
	cout << t;
}


