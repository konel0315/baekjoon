#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;
int answer = 0;
int N;

bool col[17] = { false };
bool diag1[34] = { false };//row+col
bool diag2[34] = { false };//row-col+n-1

void NQueen(int Depth)
{
	if (Depth == N) 
	{
		answer += 1;
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			//세로 Depth,가로 i
			if (col[i] == false && diag1[Depth - i + N - 1] == false && diag2[Depth + i] == false)
			{
				col[i] = true;
				diag1[Depth - i + N - 1] = true;
				diag2[Depth + i] = true;
				NQueen(Depth + 1);
				col[i] = false;
				diag1[Depth - i + N - 1] = false;
				diag2[Depth + i] = false;
			}
		}

	}


}


int main()
{

	cin >> N;

	NQueen(0);
	cout << answer;
}


