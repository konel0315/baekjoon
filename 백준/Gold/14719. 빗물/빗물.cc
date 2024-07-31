#include <iostream>
#include <vector>
using namespace std;
vector<vector <int>> v;
//□■
// 
//□□□□ 30 31 32 33
//□□□□ 20 21 22 23
//□□□□ 10 11 12 13
//□□□□ 00 01 02 03
int a, b;
//0은 빈공간 1은 벽 2는 물
int first(vector <int> a) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 1) { return i; }
	}
	return -1;
}
int last(vector <int> a) {
	for (int i = a.size()-1; i >=0; i--) {
		if (a[i] == 1) { return i; }
	}
	return -1;
}
int vcounter(vector <int>a) {
	int vcounter = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 1) { vcounter++; }
	}
	return vcounter;
}
int waterC(vector<vector<int>>a) {
	int vcounter = 0;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a[i].size(); j++) {
			if (a[i][j] == 2) { vcounter++; }
		}
	}
	return vcounter;
}
int main() {
	cin >> a;
	v.resize(a);
	cin >> b;
	for (int i = 0; i < a; i++) {
		v[i].resize(b);
	}
	for (int i = 0; i < b; i++) {
		int k,l=0;
		cin >> k;
		while (l < k) { 
			v[l][i] = 1;
			l++; }
	}
	//아래부터 순서대로 벽에 개수를 셈
	//0일경우 지금까지의 2의 개수를 return
	//1일경우 지금까지의 2의 개수를 return
	//2이상일 경우 첫 1과 마지막 1의 사이의 0을 2로 바꾸고 위로 한칸 이동
	for (int i = 0; i < a; i++) 
	{

		if (vcounter(v[i]) == 0) { cout << waterC(v); return 0; 
		}
		else if (vcounter(v[i]) == 1) { cout << waterC(v); return 0;
		}
		else if (vcounter(v[i]) >= 2) { 
			int F = first(v[i]);
			int L = last(v[i]);
			for (int j = F; j < L; j++) {
				if (v[i][j] == 0) { v[i][j] = 2;}//물로 채움
			}
			}
		}
	cout << waterC(v);
	
	}
