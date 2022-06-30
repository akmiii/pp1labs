#include <bits/stdc++.h> 
using namespace std;
int counter (int bit){
        int cnt = 0;
        while (bit){
        if (bit % 10 == 1) cnt++;
        bit /= 10;
        }
    return cnt;
    cnt = 0;
}
void solve(int i){
    int bit = 0;
    int k = 1;
    while (i){
        bit += (i % 2)*k;
        k *= 10;
        i /= 2;
    }
    cout << counter (bit) << ",";
}

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    int bitn = 0;
    int k = 1;
    for(int i = 0; i < n; i++){
        solve(i);
    }
    int cnt2 = 0;
    while (n){
        bitn += (n % 2)*k;
        k *= 10;
        n /= 2;
    }
    while (bitn){
        if (bitn % 10 == 1) cnt++;
        bitn /= 10;
    }
    cout << cnt;
}