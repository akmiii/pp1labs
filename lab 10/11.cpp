#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n == 1 or n == 0) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(abs(x));
    }

    int res = count_if(v.begin(), v.end(), isPrime);
    cout << res;
}