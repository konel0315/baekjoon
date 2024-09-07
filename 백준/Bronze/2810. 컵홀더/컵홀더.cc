#include <iostream>
#include <string>

using namespace std;

int main() {
    int k,s=0,l=0;
    cin >> k;
    string S;
    cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == 'S') {
            s++;
        
        }
        else if(S[i] == 'L') { l++; }

    }
    int sum = (l / 2) + s + 1;
    if (sum < k) { cout << sum; }
    else { cout << k; }
}
