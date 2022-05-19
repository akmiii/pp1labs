#include <bits/stdc++.h>
using namespace std;
int getDegree (int n, int sum){
    if (n == 0) return sum;
    return 2*getDegree(n-1, 1);
}
int main(){
    int n;
    cin >> n;
    cout << getDegree(n, 1);
}