#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> v;
    map<string, int> m;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
        m[v[i]]++;
    }
    int cnt = 0;
    map<string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if((*it).second == 3) cnt++;
    }
    cout << cnt;
}