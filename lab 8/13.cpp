#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> set;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        set.insert(x);
    }
    int sum = 0;
    for(auto i : set){
        sum += i;
    }
    cout << sum;
}