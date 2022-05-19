#include <bits/stdc++.h>
using namespace std;

int b = -1;

unsigned long long gen(){
    ++b;
    unsigned long long ans = 1;
    for(int i = 1; i <= b; i++){
        ans*= b;
    }
    return ans;
}


int main(){
    int n;
    cin >> n;
    vector<unsigned long long> v(n+1);
    generate(v.begin(), v.end(), gen);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}