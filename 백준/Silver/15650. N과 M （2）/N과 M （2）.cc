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
			if(Depth==0||Depth>0&&arr[Depth-1]<i)
			{
					arr[Depth] = i;//그 깊이의 값은 아직 할당 한안 i값으로 정한다
					NandM(Depth + 1);//그리고 깊이를 한칸 늘려서 다시 수행한다. 
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


