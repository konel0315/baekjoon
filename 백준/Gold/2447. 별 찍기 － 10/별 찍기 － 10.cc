#include <iostream>
#include <vector>

using namespace std;

void DrawStar(vector <vector<char>> &A, int p, int r,int q,int t)
{
	int width = r - p + 1;
	int Wpart = width / 3;

	int height = t - q + 1;
	int Hpart = height / 3;
	if (width % 3 == 0&&height%3==0)
	{
		for (int i = p + Wpart; i < p + 2 * Wpart; i++)
		{
			for (int j = q + Hpart; j < q + 2 * Hpart; j++)
			{
				A[j][i] = ' ';

			}
		}


		for (int i = p; i < r; i += Wpart) 
		{
			for (int j = q; j < t; j += Hpart)
			{
				if (i == p + Wpart && j == q + Hpart) { continue; }
				DrawStar(A, i, i + Wpart - 1, j, j + Hpart - 1);
			}
		}
		
	}
}

int main()
{


	int c;
	cin >> c;

	vector<vector<char>> A(c, vector<char>(c, '*'));;


	DrawStar(A, 0,c-1,0,c-1);
	for (int i = 0; i < A.size(); i++)
	{ 
		for (int j = 0; j < A[i].size(); j++)
		{
			cout<<A[i][j];
		}
		cout << endl;
	}
}


