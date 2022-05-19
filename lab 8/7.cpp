#include <bits/stdc++.h>
using namespace std;
bool isPrime(int a){
    if(a == 1) return false;
    for (int i = 2; i <= sqrt(a); i++){
        if(a % i == 0) return false;
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
        v.push_back(x);
    }
    int k;
    cin >> k;
    int cnt = 0;
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        if(v[i] >= k){
            if (isPrime(v[i])) cnt++;
        }
    }
    cout << cnt;
}