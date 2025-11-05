#include <iostream>
using namespace std;

int N = 0;

int Pibonaci(int n)
{
	if (n == 0)return 0;
	if (n == 1)return 1;
	return Pibonaci(n - 2) + Pibonaci(n - 1);
}

int main() 
{
	int n;
	cin >> n;
	cout << Pibonaci(n);
}

