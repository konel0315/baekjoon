#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

vector <vector<int>> person;
int Count, m, MinValue = INT_MAX;
vector <int> A;
bool player[20] = {false};

int TeamChai(int a,int b)
{
	return person[a][b];
}

//이제 만들어야하는게 n명(Count명)의 사람이 들어왔을때 2개의 팀으로 나눌수 있는 경우의수
//만약 123이 팀이면 12 13 21 23 31 32 까지 전부 더해야 하는데
//그렇다면 간단한 예시로 123 456의 팀의 경우 팀을 나누는 경우의 수는 6C3이니 20가지 

void FNDN_DFRN(int Depth,int start)
{
	int AScore=0, BScore=0;
	if (Depth == Count / 2)
	{
		vector<int> B;
		for (int i = 0; i < Count; i++)
		{
			if (!player[i]) 
			{
				B.push_back(i);
			}
		}
		for (int i = 0; i < Count / 2; i++)
		{
			for (int j = 0; j < Count / 2; j++)
			{
				if (i == j)continue;
				AScore+=person[A[i]][A[j]];
				BScore+= person[B[i]][B[j]];
			}
		}
		MinValue = min(MinValue, abs(AScore - BScore));
		return;
	}

	//A팀 선수 정하기
	for (int i = start; i < Count; i++)
	{
		if (!player[i]) 
		{
			player[i] = true;//뽑음 처리하고
			A.push_back(i);//A팀에 넣고
			FNDN_DFRN(Depth + 1,i+1);//다름 사람 뽑고
			player[i] = false;//뽑음 처리 취소하고
			A.pop_back();//A팀 한명 빼고
		}
	}

}


int main()
{
	cin >> Count;
	for (int i = 0; i < Count; i++)//0번째 선수부터 결정
	{
		person.push_back(vector<int>());
		for (int j = 0; j < Count; j++) 
		{
			cin >> m;
			person[i].push_back(m);
		}
	}
	FNDN_DFRN(0, 0);
	cout << MinValue;
}


