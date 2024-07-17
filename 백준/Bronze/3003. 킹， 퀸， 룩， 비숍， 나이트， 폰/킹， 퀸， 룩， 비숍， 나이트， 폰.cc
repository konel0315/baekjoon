#include <iostream>
using namespace std;

int main()
{
	int k, q, r, b, n, p;
	cin >> k;
	k = 1 - k;

	cin >> q;
	q = 1 - q;

	cin >> r;
	r = 2 - r;

	cin >> b;
	b= 2 - b;

	cin >> n;
	n = 2 - n;

	cin >> p;
	p = 8 - p;


	cout << k << " " << q << " " << r << " " << b << " " << n << " " << p;
}