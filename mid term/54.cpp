#include <bits/stdc++.h>
using namespace std;

// int getRes(int gcd1, int gcd2){

// }
int gcd(int n, int m){
    while (n > 0 and m > 0){
        if(n > m){
            n = n % m;
        }
        else  m = m % n;
    }
    return m + n;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
/*
0   1    2
2   8   16
   2  8
     8
*/
    for(int i = 0; i < n; i++){
        cout << gcd(arr[i], arr[i+1]) << " ";
    }
}