#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> A(N, vector<int>(M));
    vector<vector<int>> B(N, vector<int>(M));
    vector<vector<int>> C(N, vector<int>(M));

    // 행렬 A 입력
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
        }
    }

    // 행렬 B 입력
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> B[i][j];
        }
    }

    // 행렬 A와 B의 합을 계산하여 행렬 C에 저장
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // 행렬 C 출력
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
