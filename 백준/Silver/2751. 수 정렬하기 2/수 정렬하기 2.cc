#include <iostream>
#include <vector>
using namespace std;

vector<int> A;//정품
vector<int> E;//짭
void Merge(vector<int>& A,int p,int mid,int r) {
	int i = p;
	int k = p;
	int m = mid+1;
	//가져온 A라는 배열에 p부터 r 까지의 값을 쓸건데 그중 mid를 기준으로 배열
	//p부터 mid까지의 1번 배열과 mid+1부터 r까지의 2번 배열
	while (i<=mid&&m<=r)// 1번 배열의 처음과 2번 배열의 처음이 존재하면(끝보다 작으면)
	{
		if (A[i] <= A[m])//1번배열 처음이 더 작으면
		{
			E[k++] = A[i++];//짭 배열에 처음것을 넣고
		}
		else if (A[i] > A[m]) //2번 배열이 더 작으면
		{
			E[k++] = A[m++];//2번 배열을 넣는다
		}
	}
	if (i > mid) {
		for (int o = m; o <=r; o++) {
			E[k++] = A[m++];
		}
	}
	else
	{
		for (int o = i; o <= mid; o++) {
			E[k++] = A[i++];
		}
	}
	for (int o = p; o <=r;o++) {//시작하는 배열의 인덱스값을 A에 넣는다
		A[o] = E[o];
	}
	//문제점이였던거
	//k를 안만들고 k자리에 p를 두어서p의 값이 중간에 변해 마지막 복사에 문제가 생겼었다

}

void Merge_Sort(vector<int>& A,int p,int r) {
	//A는 배열 p는 배열 A의 시작 r은 배열A의 끝
	if (p < r) 
	{
		int mid = (p + r) / 2;
		Merge_Sort(A, p, mid);
		Merge_Sort(A, mid + 1, r);
		Merge(A,p,mid,r);
	}
}


int main() {
	int a;
	cin >> a;
	A.resize(a);
	E.resize(a);
	for (int i = 0; i < a; i++) {
		int k;
		cin >> k;
		A[i] = k;
	}
	Merge_Sort(A, 0, a - 1);
	for (int i = 0; i < a; i++) {
		cout << A[i]<<"\n";
	}
}