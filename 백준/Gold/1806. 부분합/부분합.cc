#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int> v;
int a, b;
int main() {
	cin >> a;
	v.resize(a);
	cin >> b;
	for (int i = 0; i < a; i++) {
		cin >> v[i];
	}
	int start = 0, end = 0, currentsum = 0 , mini = INT_MAX;
	while (end<a) {
		currentsum += v[end];
		end++;
		while (currentsum >= b) {
			mini = min(mini, end - start);
			currentsum -= v[start];
			start++; 
		}
	}
	if (mini == INT_MAX)
	{
		mini = 0;
	}
	cout << mini;
}