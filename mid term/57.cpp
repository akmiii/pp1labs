#include <bits/stdc++.h> 
using namespace std;
void getArr(int l, int r){
    while(l <= r){
        if (l % 2 == 0) cout << l << " ";
        l++;
    }
}

int main(){
    int l , r;
    cin >> l >> r;
    getArr(l, r);
}