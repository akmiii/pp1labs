#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int num;
    cin >> num;
    if (num % 2 != 0) {
        cout << "Odd";
    }
    else if (num == 0) {
        cout << "None";
    }
    else {
        cout << "Even";
    }
    return 0;
}
