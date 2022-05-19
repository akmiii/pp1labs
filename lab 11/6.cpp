#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v;
    int mx = max(n, m);
    for(int i = 1; i <= mx; i++){
        if((n % i) == 0 and (m % i) == 0) v.push_back(i);
    }
    sort(v.rbegin(), v.rend());
    for(int i = 0; i < v.size(); i++){
        cout << v[k-1];
        return 0;        
    }
}