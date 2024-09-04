#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string N;
    cin >> N;
    float a = 0;
    if (N[0] == 'A') { a += 4; }
    else if (N[0] == 'B') { a += 3; }
    else if (N[0] == 'C') { a += 2; }
    else if (N[0] == 'D') { a += 1; }
    else if (N[0] == 'F') { a += 0; }
    if (N[1] == '+') { a += 0.3; }
    else if (N[1] == '0') { a += 0; }
    else if (N[1] == '-') { a -= 0.3; }

    cout << fixed << setprecision(1) << a;


}


