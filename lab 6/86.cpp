#include <bits/stdc++.h>
using namespace std;
float getPerc(float n, float m){
    return ((m * 100) / n);
}
int main(){
    float n, m;
    cin >> n >> m;
    cout << getPerc(n, m);
}