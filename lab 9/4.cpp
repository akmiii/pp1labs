#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
        m[v[i]]++;
    }
    
    cout << m[k];
}