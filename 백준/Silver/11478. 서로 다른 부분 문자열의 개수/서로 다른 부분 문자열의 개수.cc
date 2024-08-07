#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

string n;

int main() {
    cin >> n;
    unordered_set<string> s;

    for (int i = 0; i < n.size(); i++) {
        for (int j = 1; j <= n.size() - i && j < n.size() + 1; j++) {
            string sub = n.substr(i, j);

            // 부분 문자열 sub가 집합 s에 존재하지 않으면 추가
            if (s.find(sub) == s.end()) {
                s.insert(sub);
            }
        }
    }

    cout << s.size() << endl;

    return 0;
}
