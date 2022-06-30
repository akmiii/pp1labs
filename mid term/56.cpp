#include <bits/stdc++.h>
using namespace std;
         
char getSimbol(int n){
    if(n > 9 ) return n - 10 + 'A';
    return n + '0'; 
}

void getRec(int n){
    if(n == 0) return;
    getRec(n/16);
    cout << getSimbol(n%16); 
}

int main(){
    int n; 
    cin >> n;
    getRec(n);    
}
