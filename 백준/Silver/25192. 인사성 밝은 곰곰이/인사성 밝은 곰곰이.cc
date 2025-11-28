#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	unordered_set<string> guestbook;
	int N,ans=0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		if (s == "ENTER") 
		{
			guestbook.clear();
		}
		else if(!guestbook.count(s))
		{
			guestbook.insert(s);
			ans++;
		}
	}
	cout << ans;
}

