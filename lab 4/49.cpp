#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++){
        bool was = true;
        for (int j = 2; j <= i/2; j++){
            if ((i % j) == 0){
                was = false;
                break;
            }
        }
        if (was == true) {
        cout << i << " is prime" << endl;
        }
    }
}