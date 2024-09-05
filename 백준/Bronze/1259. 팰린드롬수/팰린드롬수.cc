#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
   vector <int> y; 
   string N;
   
   while (N[0] != '0') {
       cin >> N;
       int k = 0;
       for (int i = 0; i<int(N.length() / 2); i++) {
           if (N[i] != N[N.length() - i - 1])
           {
               y.push_back(1);
               k = 1;
               break;
           }
           else { k = 0; }
       }
       if (k == 0) {
           y.push_back(0);
       }
   } 

   for (int i = 0; i < y.size() - 1; i++) {
       if (y[i] == 0) {
           cout << "yes" << endl;
       }
       else { cout << "no" << endl; }
   }
}


