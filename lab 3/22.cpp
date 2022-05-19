#include <iostream> 
#include <cmath>
using namespace std;
int main(){
int n;
cin >> n;
int a[n];
for (int i = 0; i < n; i++){ 
    cin >> a[i];
    }
int mx = a[0];
int pos = 0;
for (int i = 0; i < n; i++){
        if (mx < a[i]) {
        mx = a[i]; 
        pos = i;
        }
    }
   cout << pos +1; 
   } 