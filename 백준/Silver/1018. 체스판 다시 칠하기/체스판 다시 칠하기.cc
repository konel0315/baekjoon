#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> v;
//[0][0],[0][1],[0][2],[0][3]
//[1][0],[1][1],[1][2],[1][3]
int n,m;
string chess;
//B=1 W=0
// 
//도장으로 두개의 8x8배열 만들기
int startW[8][8] = {
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0}
};
int startB[8][8] = {
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1}
};
//두 2차원 배열 비교하여 점수 내는 함수
int compare(vector<vector<int>> v,int array[8][8],int m,int n) {
	int score = 0;
	int Mmax = 0;
	for (int o = 0; o < n-7; o++) {
		for (int p = 0; p < m-7; p++) {
			
			
			score = 0;
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					if (v[i+p][j+o] == array[i][j])
					{
						score++;
					}
				}
			}
			//cout<<"Max : "<<Mmax<<"Score : "<<score<<"\n";
			if (Mmax < score) { Mmax = score;
			}

		}
	}
    //cout<<"Max : "<<Mmax<<"\n";
	return Mmax;
}

//가로로 한칸씩 총 n-7번 세로로 한칸씩 총 m-7번찍는 경우를 전부 해보며
//점수 계산, 가장 큰 점수를 64에서 뺌




int main() {
	cin >> m;//높이
	cin >> n;//가로
	v.resize(m);
	for (int i = 0; i < m; i++) { v[i].resize(n); }
	for (int i = 0; i < m; i++) {
		cin >> chess;
		for (int j = 0; j < n; j++) {
			if (chess[j] == 'B') { v[i][j] = 1; }
			else v[i][j] = 0;
		}
	}
	int scoreW = compare(v, startW, m, n);
	int scoreB = compare(v, startB, m, n);

	int result = min(64 - scoreW, 64 - scoreB);
	cout << result << endl;
	}
