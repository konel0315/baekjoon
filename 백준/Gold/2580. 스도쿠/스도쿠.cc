#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;
vector<vector<int>> sudoku(9,vector <int> (9,0));
bool numCol[9][10] = {false};
bool numRow[9][10] = {false};
bool numBox[9][10] = { false };
bool flag = false;

vector<int> PosNum(int p,int q) 
{
	vector <int> arr;
	int b = (q / 3) * 3 + (p / 3);
	for (int i = 1; i < 10; i++)
	{
		if (!numRow[q][i]&&!numCol[p][i]&&!numBox[b][i])
		{
			arr.push_back(i);
		}
	}
	return arr;
}


void Sudoku(int Depth,vector<pair<int,int>> &zeropoint)
{
	if (Depth == zeropoint.size())
	{
		flag = true;
		return;
	}
			int x = zeropoint[Depth].first;
			int y = zeropoint[Depth].second;

			vector <int> arr = PosNum(x, y);//좌표에 가능한 수의 백터

			for (int j = 0; j < arr.size(); j++)
			{
				numCol[x][arr[j]] = true;
				numRow[y][arr[j]] = true;
				numBox[(y / 3) * 3 + (x / 3)][arr[j]] = true;
				sudoku[y][x] = arr[j];
				Sudoku(Depth + 1, zeropoint);
				if (flag)return;
				numCol[x][arr[j]] = false;
				numRow[y][arr[j]] = false;
				numBox[(y / 3) * 3 + (x / 3)][arr[j]] = false;
				sudoku[y][x] = 0;
			}


	
}


int main()
{
	vector <pair<int,int>> zeropoint;
	for(int i=0;i<9;i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int num;
			cin >> num;
			sudoku[i][j] = num;
			if (num == 0) zeropoint.push_back({ j, i });
			else 
			{
				numCol[j][num] = true;
				numRow[i][num] = true;
				numBox[(i / 3) * 3 + (j / 3)][num] = true;
			}
			
		}
	}
	Sudoku(0,zeropoint);
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout<< sudoku[i][j]<<" ";
		}
		cout << "\n";
	}
}


