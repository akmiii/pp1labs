#include <bits/stdc++.h> 
using namespace std;
int main(){
int n, l, r;
cin >> n >> l >> r;
l--;
r--;
int a[n];
for (int i = 0; i < n; i++) cin >> a[i];
while (l <= (l+r)/2){
    swap(a[l], a[r--]);
    l++;
}
for (int i = 0; i < n; i++){
    cout << a[i] << " ";
}
}