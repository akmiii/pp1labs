#include <bits/stdc++.h>
using namespace std;
void getRes(int n, int i){
    if (i > n) return;
    cout << i << " ";
    getRes(n, i+1);
}
int main(){
    int n;
    cin >> n;
    getRes(n, 1);
}