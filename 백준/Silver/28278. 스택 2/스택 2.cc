#include <iostream>
#include <stack>
#include <queue>

using namespace std;
stack <int> s;
queue <int> q;
int a,b,c;
int main() {
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b == 1) { 
			cin >> c;
			s.push(c); }
		else if (b == 2) {
			if ((s.empty()) == false)
			{
				q.push(s.top());
				s.pop();
			}
			else {
				q.push(-1); }
		}
		else if(b == 3) {
			q.push(s.size());
		}
		else if(b == 4) {
			if ((s.empty()) == false) {
				q.push(0); }
			else {
				q.push(1); }
		}
		else if(b == 5) {
			if ((s.empty()) == false)
			{
				q.push(s.top());
			}
			else {
				q.push(-1);
			}
		}

	}
	while (!q.empty()) {
		cout<<(q.front())<<"\n";
		q.pop();
	
	}
}