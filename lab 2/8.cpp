#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double n, k;
    cin >> n >> k;
    double a, b;
    if (n < k) {
        cout << "2";
    }
    else {
        a = 2 * n / k;
        b = ceil (a);
      printf ("%1.f\n", b);
    }
    return 0;
}