#include <bits/stdc++.h> 
using namespace std;
int main(){
    int m, d;
    cin >> m >> d;
    int remainder = 0;
    if (m >= 1 and m <= 12){
        if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12){
            if (d < 1 or d > 31){
                cout << "Not correct";
                return 0;
            }
        }
        else if (m == 2){
            if (d < 1 or d > 28){
                cout << "Not correct";
                return 0;
            }
        }
        else{
            if (d < 1 or d > 30){
                cout << "Not correct";
                return 0;
            }
        }

        for(int i = 1; i < m; i++){
            if (i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12){
                remainder += 31;
            }
            else if (i == 2){
                remainder += 28;
            }
            else{
                remainder += 30;
            }
        }
        
        remainder += d;
        cout << 366 - remainder;
    }
    else{
        cout << "Not correct";
    }
}