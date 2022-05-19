#include <bits/stdc++.h>
using namespace std;
int getFact (int n){
    if (n == 0) return 1;

    return (n * getFact(n-1));
}
int main(){
    int n;
    cin >> n;
    cout << getFact(n);
}