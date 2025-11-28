#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int N;
	int Min= 1000000, Max=-1;
		
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int k = 0;
		cin >> k;
		Min=min(Min, k);
		Max = max(Max, k);
	}
	cout << Min * Max;
	
}

