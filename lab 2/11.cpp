#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, m, max = 0;
    cin >>n;
    for (int i = 0; i < n; i++){
         int num;
         cin >> num;
    if (num > max){
        max = num;
      }
    }
    cout << max;
    return 0;
}