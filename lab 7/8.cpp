#include <bits/stdc++.h>
using namespace std;
int Fib(int n, int i, int a, int b){
    if (n == 1) return 0;

    if (i == n) return a;
    return Fib(n, i+1, b, a + b); //3 2 1 1

}
int main(){
    int n;
    cin >> n;
    cout << Fib(n, 1, 0, 1);
}
/*
#include <iostream>
#include <cmath>
using namespace std;

int Fibon(int n){
    if(n<=1) return n;
    return Fibon(n-1)+Fibon(n-2);
}

int main(){
    int n; cin>>n;
    cout<<Fibon(n-1);
}
*/