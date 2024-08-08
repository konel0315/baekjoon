#include <iostream>
#include <vector>

using namespace std;

long long n,a,b;
long long sell = 0;
vector <int> v;
int main() {
    cin >> n;
    v.resize(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> a;
    cin >> b;
    for (long long i = 0; i < n; i++) {
            v[i] = v[i] - a;
        //총감독관 수
       sell++;
    }
    for (long long i = 0; i < n; i++) {
        if (v[i] > 0 && v[i] <= b) {
            sell++;
        }
        else if(v[i]>b){
                sell += v[i]/b;
                if (v[i] % b != 0) { sell++; }
        }
    }
    cout << sell;
    return 0;
}
