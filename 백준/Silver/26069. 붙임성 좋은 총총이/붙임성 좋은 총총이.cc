#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;


unordered_set<string> RainbowDance;



int main()
{
	int N=0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string firstName, secondName;
		cin >> firstName >> secondName;
		if (firstName == "ChongChong" || secondName == "ChongChong") 
		{
			RainbowDance.insert(firstName);
			RainbowDance.insert(secondName);

		}
		else if (RainbowDance.count(firstName)) RainbowDance.insert(secondName);
		else if (RainbowDance.count(secondName)) RainbowDance.insert(firstName);

	}
	cout << RainbowDance.size();
	
	

}

