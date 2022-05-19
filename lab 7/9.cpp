#include <bits/stdc++.h>
using namespace std;

long long getSum(int n, long long sum){
    if (n == 0) return sum;
    sum  += n;  
    cin >> n;
  
    return getSum(n, sum);
}

int main(){
    int n;
    cin >> n;
    cout << getSum(n, 0); 
}
    