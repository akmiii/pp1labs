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
        m[v[i]] = 1;
    }
    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < i; j++){
            if(m[v[i]^v[j]]) cnt++;
        }
    }
    cout << cnt;
}