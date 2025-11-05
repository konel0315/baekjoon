#include <iostream>
#include <vector>

using namespace std;



int recursion(const string &s, int l, int r,int *count) {
	(*count)++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1,count);
}

int isPalindrome(const string &s,int *count) {
	return recursion(s, 0, s.length() - 1, count);
}

int main() 
{
	int count;
	cin >> count;
	vector <string> list;

	for (int i = 0; i < count;i++) 
	{
		string s;
		cin >> s;
		list.push_back(s);
	}
	for (int i = 0; i < count; i++) 
	{
		int action=0;
		cout << isPalindrome(list[i],&action) << " " << action<<endl;
	}
	
}
