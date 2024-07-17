#include <iostream>
#include <string>
using namespace std;

int main()
{
	string line;
	int a;//3
	cin >> a;//length
	int array[100];
	int b;
	
	int i = 0;
	int count = 0;
	while (i < a) {	
		int k;
		cin >> array[i];
		i++;
	}//i=3
	cin >> b;//key
	i = 0;
	while (i < a) {
		if (array[i] == b) { count++;}
		i++;
	}
	cout << count;
}