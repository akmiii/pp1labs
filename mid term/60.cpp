#include <bits/stdc++.h> 
using namespace std;
bool IsPerfectNumber(int num){
    bool ok = false;
    if (num % 3 == 0) ok = true;
    return ok;
}
int main(){
    int i;
    int cnt = 0;
    while (i >= 0){
        cin >> i;
        if (IsPerfectNumber(i) == false){
            break;
        } 
        else {
            cnt++;
        }
    }
    cout << cnt;
}