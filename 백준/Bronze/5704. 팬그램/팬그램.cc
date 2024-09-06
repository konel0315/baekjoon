#include <iostream>
#include <string>
#include <set>

using namespace std;

bool is_pangram(const string& sentence) {
    set<char> alphabet_set;
    
    // 입력된 문장에서 알파벳 문자만 추출하여 set에 삽입
    for (char ch : sentence) {
        if (ch >= 'a' && ch <= 'z') {
            alphabet_set.insert(ch);
        }
    }
    
    // 알파벳 26개가 모두 들어있다면 팬그램
    return alphabet_set.size() == 26;
}

int main() {
    string sentence;
    
    while (true) {
        // 한 줄 입력 받기
        getline(cin, sentence);
        
        // '*'이면 종료
        if (sentence == "*") {
            break;
        }
        
        // 팬그램 여부 확인 후 출력
        if (is_pangram(sentence)) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}
