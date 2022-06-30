#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin >> n; //money
    int month = 0;
    int sum = 0;
    while(sum < 500000){
        sum += 0.3 * n;
        n += (n * 0.1);
        month++;
    }
    cout << month;
}