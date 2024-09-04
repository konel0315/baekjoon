#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string N;
    cin >> N;
    int c = 0;
     c += count(N.begin(),N.end(),'a');
     c += count(N.begin(), N.end(), 'e');
     c+= count(N.begin(), N.end(), 'i');
     c+= count(N.begin(), N.end(), 'o');
     c += count(N.begin(), N.end(), 'u');
     cout << c;
}


