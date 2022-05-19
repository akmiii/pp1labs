#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = 0;
    int a = n;
    while(n != 0){
        m += n;
        n--;
    }
    vector<int> v(m);
    int k = 0;
    for(int i = 1; i <= a; i++){
        fill(v.begin()+k, v.begin()+k+i, i);
        k += i;
    }
    for(auto i : v){
        cout << i << " ";
    }
}