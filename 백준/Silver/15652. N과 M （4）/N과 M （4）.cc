#include <iostream>
#include <vector>

using namespace std;

vector <int> arr;
int n, m;
bool used[9] = { false };


void NandM(int Depth)
{
	if (Depth == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i < n + 1; i++)//i는 커짐
	{
		if (Depth == 0 || i >= arr[Depth - 1]) {
			arr[Depth] = i;
			NandM(Depth + 1);
		}
	}
}

int main()
{
	cin >> n>>m;
	for (int i = 0; i < m; i++)
	{
		arr.push_back(-1);
	}
	NandM(0);
}


