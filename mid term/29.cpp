#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    int i = 2;
    while (cnt < n){
        cout << i << " ";
        cnt++;
        i += 3;
    }
}