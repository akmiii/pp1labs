#include <bits/stdc++.h> 
using namespace std;
int main(){
int n, l, r; 
cin >> n >> l >> r;
l--; 
r--;
int a[n];
for (int i = 0; i < n; i++) cin >> a[i];

long long sum = 0;

while (l <= r) {
    sum += a[l];
    l++;
}
cout << sum;
}
