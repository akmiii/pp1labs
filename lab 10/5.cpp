#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, double> mp;
    int total = 0;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        for(int j = 0; j < m; j++){
            string city;
            double people;
            cin >> city >> people;
            mp[city] += people;
            total += people;
        }
    }
    map<string, double> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << (it->second  / total)* 100  << endl;
    }
        
}