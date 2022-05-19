#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2 * n - 1; j++){
            if(i + j >= n - 1 and k + n - 1 >= i+j){
                cout << "*";
            } else cout <<".";
        }
        k+=2;
        cout << endl;
    }
}
/*

...*...                  ...*...
..***..                  ..***..
*******  5               .*****.
                         *******  7
*/