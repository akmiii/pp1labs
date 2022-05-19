#include <iostream>
using namespace std;
int main () {
int n, k;
cin >> n >> k;
int s;
s = n + (k / 100 + k % 10);
cout << s;
return 0;
}