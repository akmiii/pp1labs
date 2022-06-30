#include <bits/stdc++.h>
using namespace std;

bool getRes(int n, int sum){
    if(n == sum) return true;
    if(sum > n) return false;
    return getRes(n, sum*2);
}
int main(){
    int n;
    cin >> n;
    if(getRes(n, 1)) cout << "Yes";
    else cout << "No";
}