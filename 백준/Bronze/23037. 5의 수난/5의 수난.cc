#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number;
    cin >> number;
    
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, 5);
        number /= 10;
    }
    
    cout << sum << endl;
    return 0;
}
