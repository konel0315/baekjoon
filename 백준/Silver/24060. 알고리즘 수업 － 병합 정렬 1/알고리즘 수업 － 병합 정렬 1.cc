#include <iostream>
#include <vector>

using namespace std;

int Count, num,num2, answer = -1;

void Merge(vector<int>& A, int p, int q, int r);
void MergeSort(vector<int>& A, int p, int r);


int main() 
{
	vector<int> A;
	
	cin >> Count>>num;

	for (int i = 0; i < Count; i++)
	{
		int k;
		cin >> k;
		A.push_back(k);

	}
	MergeSort(A, 0, A.size() - 1);
	cout << answer;
}


void Merge(vector<int>& A, int p, int q, int r)
{
	vector<int> tmp(r - p + 1);
	int i = p;
	int j = q + 1;
	int t = 0;
	while (i <= q && j <= r)
	{
		if (A[i] <= A[j])
		{
			tmp[t++] = A[i++];
		}
		else tmp[t++] = A[j++];
	}

	while (i <= q) tmp[t++] = A[i++];
	while (j <= r) tmp[t++] = A[j++];

	for (int k = 0; k < t; k++)
	{
		A[p + k] = tmp[k];
		num2++;
		if (num2 == num) answer=tmp[k];
	}
}

void MergeSort(vector <int>& A, int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;

		MergeSort(A, p, q);
		MergeSort(A, q + 1, r);
		Merge(A, p, q, r);
	}

}
