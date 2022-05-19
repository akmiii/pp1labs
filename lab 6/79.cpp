#include <bits/stdc++.h>
using namespace std;

int getMax (int a, int b, int c, int d){
    if (a >= b and a >= c and a >= d) return a;
    else if (b >= a and b >= c and b >= d) return b;
    else if (c >= a and c >= b and c >= d) return c;
    return d;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << getMax(a, b, c, d);
}