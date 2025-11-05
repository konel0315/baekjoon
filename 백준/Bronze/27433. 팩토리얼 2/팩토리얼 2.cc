#include <iostream>
using namespace std;

long long Pac(int N);

int main() 
{
	int N;
	cin >>N;
	cout << Pac(N);
}

long long Pac(int N) 
{
	if (N == 1) return 1;
	else if (N == 0) return 1;
	else return N * Pac(N - 1);
}