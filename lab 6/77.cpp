#include <iostream>
#include <cmath>
using namespace std;
bool check(int n){
    bool ok = true;
    while(n > 0){
        if ((n % 10) % 2 == 1){
            ok = false;
            break;
        }
        n /= 10;
    }
    if (ok == true){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    if (check(n)){
        cout << "Valid";
    }
    else cout << "Not valid";
}