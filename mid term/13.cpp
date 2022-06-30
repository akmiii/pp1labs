#include <bits/stdc++.h> 
using namespace std;
bool isPrime(int n){
    bool ok = true;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) ok = false;
    }
    if (ok == true) return true;
    return false;
}
int main(){
    int n, f;
    cin >> n >> f;
    if (isPrime(n) and n <= 500 and f % 2 == 0) cout << "Good job!";
    else cout << "Try next time!";
}