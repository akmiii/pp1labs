#include <bits/stdc++.h>
using namespace std;
bool cmp (int a, int b){
    return a > b;
}
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    vector<int> v_even;
    vector<int> v_odd;
    for(int i = 0; i < v.size(); i++){
        if (v[i] % 2 == 0) v_even.push_back(v[i]);
        else{
            v_odd.push_back(v[i]);
        }
    }
    sort(v_even.begin(), v_even.end(), cmp);

    for(auto i : v_even){
        cout << i << " ";
    }
    sort(v_odd.begin(), v_odd.end());
    for(auto i : v_odd){
        cout << i << " ";
    }
}
/*
*/