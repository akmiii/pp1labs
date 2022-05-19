 #include <iostream>
using namespace std;
int main () {
int n;
cin >> n;
int a, b, c, d;
a = n % 2; // 0
n = n / 2; 
b = n % 2; // 0
n = n / 2; 
c = n % 2; // 1
n = n / 2; // 1
d = n + 2 * c + 4 * b + 8 * a;
cout << d;
return 0;
}