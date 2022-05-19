#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
        m[v[i]]++;
    }
    int cnt = 0;
    for(auto i : m){
        if (i.second >= 2) cnt++;
    }
    cout << cnt;
}