#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M, i, j, k;
    vector<int> v;
    cin >> N >> M;
    for(int n=1; n<=N; n++){
        v.push_back(n);
    }
    while (M--){
        cin >> i >> j >> k;
        rotate(v.begin()+i-1, v.begin()+k-1, v.begin()+j);
    }
    for(int num:v){
        cout<<num<<" ";
    }    
}