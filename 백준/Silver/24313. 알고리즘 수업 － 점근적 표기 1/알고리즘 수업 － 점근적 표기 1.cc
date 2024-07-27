#include <iostream>
#include <vector>
using namespace std;

int a,b,c,x;

int bigO(int a,int b,int c,int x) {
	//7x+7<8x       7<x
	//ax+b<cx  ax-cx+b<0  (a-c)x+b<0
	//-b/(a-c)
	int y;
	if (a<c) {
		y = -b/(a - c);
		if (x >= y) { return 1; }
		else { return 0; }
	}
	if (a >= c) { 
		if (a == c && b<0) { return 1; }
		return 0; }
	return -1;

}


int main() {
	cin >> a; cin >> b;
	//f(n)=an+b
	cin >> c;
	//g(n)=cn
	cin >> x;
	//ax+b<cx(참이여야함)
	cout<<bigO(a, b, c, x);

}