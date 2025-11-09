#include <iostream>
#include <vector>

using namespace std;

void Hanoi(int n,int from,int to,int via)
{
	if (n == 0) return;
	Hanoi(n - 1, from, via, to);
	cout << from << " " << to<<"\n";
	Hanoi(n - 1, via, to, from);
	
}

int main()
{
	int n=1,k;
	cin >> k;
	for (int i = 0; i < k; i++) 
	{
		n *= 2;
	}
	cout << n - 1<<"\n";
	Hanoi(k, 1, 3, 2);
}


