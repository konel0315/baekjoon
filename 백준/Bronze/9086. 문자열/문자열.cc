#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    string N;
    int k;
    vector <char> v;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> N;
        char q = N[N.length()-1];
        char p = N[0];
        v.push_back(p);
        v.push_back(q);

    }
    for (int i = 0; i < 2*k;i=i+2) {
        cout << v[i] << v[i + 1] << endl;
    }
}


