#include <bits/stdc++.h>
using namespace std;
char getRes(int n){
    if(n >= 10) return n + 'A' - 10;
    return n + '0';
}

void solve(int n, int k){
    if (n == 0) return;
    solve(n/k, k);
    cout << getRes(n % k);
}

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    solve(n, k);
}