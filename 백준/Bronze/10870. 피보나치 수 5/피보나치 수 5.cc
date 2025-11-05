#include <iostream>
using namespace std;

int N = 0;

int Pibonaci(int a, int b, int n)
{
	if (n == 0) return a;
	N++;
	if (N == n) return b;
	return Pibonaci(b, a + b, n);
}

int main() 
{
	int n;
	cin >> n;
	cout << Pibonaci(0, 1, n);
}

