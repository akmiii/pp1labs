#include <bits/stdc++.h> 
using namespace std;
int getSum(int i, int sum){
    return sum + i;
}
int main(){
    int n, d, a;
    cin >> n >> a >> d;
    int cnt = 0;
    //int i = a;
    int sum = 0;

    while(cnt < n){
        cout << a << " ";
        sum += a;
        cnt++;
        a += d;        
    }

    cout << endl;
    cout << "sum: " << sum;
    
    // n a d
    // 5 1 1
    // 1 2 3 4 5
}