#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int findGCD(const vector<int>& numbers) {
    int result = numbers[0];
    for (size_t i = 1; i < numbers.size(); ++i) {
        result = gcd(result, numbers[i]);
    }
    return result;
}


vector<int> getDivisors(int num) {
    vector<int> divisors;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int result = findGCD(numbers);
    vector<int> divisors = getDivisors(result);

    for (int divisor : divisors) {
        cout << divisor << "\n";
    }
    cout << endl;

    return 0;
}
