#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    int sum = 0;
    int a;
    a = n;
    while(n){
        sum += n % 10;
        n /=10;
    }
    if(sum % (a % 10) == 0) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
}