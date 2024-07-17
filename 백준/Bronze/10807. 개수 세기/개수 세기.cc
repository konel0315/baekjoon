#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // 정수의 개수 입력
    int array[N]; // 배열 크기 N으로 선언

    // 배열 요소 입력 받기
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    int v;
    cin >> v; // 찾으려는 정수 v 입력

    // 배열에서 v의 개수 세기
    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (array[i] == v) {
            count++;
        }
    }

    // 결과 출력
    cout << count << endl;

    return 0;
}
