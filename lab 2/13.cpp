#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){
         int num;
         cin >> num;
         if (num % 10 == 7){
             c++;
         }
    }
    cout << c;
    return 0;
}