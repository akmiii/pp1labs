#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin >> n;
    // string s = "";
    // s += n + '0';
    int num;
    int cnt = 0;
    for(int i = 0; i <= n; i++){
        num = i;
        while (num > 0){
            if (num % 2 == 1) cnt++;
            num /= 2;
        }
        cout << cnt;
        cnt = 0;
    }
    
    //cout << s;
}

    