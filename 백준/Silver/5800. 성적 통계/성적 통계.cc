#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int K; 
    cin >> K;
    int arr[51];

    for (int k = 1; k <= K; k++) {
        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + N, greater<int>());
        
        cout << "Class " << k << endl;
        cout << "Max " << arr[0] << ", ";
        cout << "Min " << arr[N - 1] << ", ";

        int largest = 0;
        for (int i = 1; i < N; i++) {
            largest = max(largest, arr[i - 1] - arr[i]);
        }
        cout << "Largest gap " << largest << endl;
    }

    return 0;
}
