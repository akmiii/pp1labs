#include <bits/stdc++.h>
using namespace std;
bool isPal(vector<int> a){
    for(int i = 0; i < a.size(); i++){
        if(a[i] != a[a.size()-1-i]) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    do{
        if(isPal(v)){
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            }
            return 0;
        }
        //cout << endl;
        
    }
    while(next_permutation(v.begin(), v.end()));

    cout << "Impossible";
}