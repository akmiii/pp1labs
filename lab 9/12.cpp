#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector< pair<int, int> > v;
    for(int i = 0; i < n; i++){
        int x, y;                               // 3 3 - 6        2 -1 - 1     7 2 - 9
        cin >> x >> y;
        int a = x + y;
        int b = i + 1;
        v.push_back(make_pair(a, b)); 
    }
    sort(v.begin(), v.end());
    
    for(auto i : v){
        cout << i.second << " ";
    }
}