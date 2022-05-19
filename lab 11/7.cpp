#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, set<int> > mp;
    int n;
    cin >> n;
    while(n--){
        string name;
        int num;
        cin >> name >> num;
        mp[name].insert(num);
    }
    map<string, set<int> > :: iterator it;

    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " ";
        if((*it).second.size() < 3){
            cout << "NO BONUS" << endl;
        }
        else cout << "+1" << endl;
    }
}