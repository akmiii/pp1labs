#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, double> mp;
    double total = 0;
    for(int i = 0; i < n; i++){
        string name;
        double marks;
        cin >> name >> marks;
        mp[name] += marks;
        total += marks;
    }
    vector<pair<double, string> > v;
    for(auto i : mp){
        v.push_back(make_pair( i.second*100/total, i.first));
    }
    sort(v.rbegin(), v.rend());
    for(auto i : v){
        cout << i.second << " " << i.first << '%' << endl;
    }
}
