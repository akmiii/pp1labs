#include <bits/stdc++.h>
using namespace std;

void toBin(int n){
    vector<int> v;
    int a;
    while(n != 0){
        a = n % 2;
        n /= 2;
        v.push_back(a);
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
    cout << endl;

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
    for_each(v.begin(), v.end(), toBin);
}