#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<pair<int, int>, double> a, pair<pair<int, int>, double> b){
    return a.second < b.second;
}
int main(){
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    vector<pair<pair<int, int>, double> > v;
    for(int i = 0; i < n; i++){
        int x1, y1;
        cin >> x1 >> y1;
        double d;
        d = sqrt(pow((x1-x), 2) + pow((y1-y), 2));
        v.push_back(make_pair(make_pair(x1, y1), d));
    }
    sort(v.begin(), v.end(), cmp);
    vector <pair<pair<int, int>, double> > :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << it->first.first << " " << it->first.second << endl;
    }
}