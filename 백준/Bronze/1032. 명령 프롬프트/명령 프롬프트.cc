#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> str(n);

    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    
    for(int i = 0; i < str[0].length(); i++) {
        char c = str[0][i];
        for(int j = 1; j < n; j++) {
            if(c != str[j][i]) {
                c = '?';
                break;
            }
        }
        cout << c;
    }
    
    cout << endl;
    return 0;
}