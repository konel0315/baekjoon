#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
	int k, c = 0;
	string sr;
	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> sr;
		unordered_map<char, int> m;
		bool isGroupWord = true;

		for (int j = 0; j < sr.length(); j++) {
			if (m[sr[j]] > 0 && sr[j] != sr[j - 1]) {
				isGroupWord = false;
				break;
			}
			m[sr[j]]++;
		}

		if (!isGroupWord) {
			c++;
		}
	}

	cout << k - c << endl; // 그룹 단어가 아닌 경우의 카운트를 빼서 출력
	return 0;
}
