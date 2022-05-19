#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        while (num > 9){
          if (num % 10 == 0){
              c++;
          }  
         num /= 10;
        }
    }
    cout << c;
}