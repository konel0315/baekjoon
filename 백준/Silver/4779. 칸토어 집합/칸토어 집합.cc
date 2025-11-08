#include <iostream>
#include <vector>

using namespace std;

void kantowaZeroPoint(vector <int> &A, int p, int r)
{
	int Len = r - p + 1;
	if (Len % 3 == 0) {
		for (int i = p + Len/3; i < p+(Len * 2 / 3); i++)
		{
			A[i] = 0;
		}
		kantowaZeroPoint(A, p, p+Len / 3 - 1);
		kantowaZeroPoint(A, p+(Len * 2 / 3), r);
	}
}

int main()
{
	vector<int> inputs;
	int k;

	while (cin >> k)
	{
		inputs.push_back(k);
	}

	for (int N : inputs) {
		int size = 1;
		for (int i = 0; i < N; i++) size *= 3;
		vector<int> A(size, 1);
		kantowaZeroPoint(A, 0, size-1);
		for (int i = 0; i < size; i++)
		{
			if (A[i] == 1)cout << "-";
			else cout << " ";
		}
		cout << endl;
	}
}


