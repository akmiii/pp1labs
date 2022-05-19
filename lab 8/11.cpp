#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a > b;
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
    int k;
    cin >> k;
    sort(v.begin(), v.end(), cmp);
    int sum = 0;
    for(int i = 0; i < k; i++){
        //cout << v[i] << " ";
        sum += v[i];
    }
    cout << sum;
}