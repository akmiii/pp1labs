#include <bits/stdc++.h> 
using namespace std;
int getGCD(int a, int b){
    if (b == 0) return a;  

    return getGCD(b, a % b);    
}  
// 12 24 (24, 12) -- > (12, 2) --> (2, 6) -- > (6, 2) --> (2, 0) 6 is gcd

int main(){
    int a, b;
    cin >> a >> b;
    cout << getGCD(a, b);
}