#include <bits/stdc++.h>
using namespace std;

int getSum (int n){
    int summ = 0;
    int c = 0;
    while (n > 0){
        c = n % 10;
        summ += c;
        n /= 10;
    }
    return summ;
}

int main(){
    int n;
    cin >> n;
    cout << getSum(n);
}