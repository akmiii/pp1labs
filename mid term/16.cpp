#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, m, y;
    cin >> d >> m >> y;
    bool ok = false;
    if(y >= 1970 and y <= 2035){
        if ((m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) and (d >= 1 and d <= 31)){
             ok = true;
        }
        else if ((m == 4 or m == 6 or m == 9 or m == 11) and (d >= 1 and d <= 30)){
             ok = true;
        }
        else if (m == 2 and d >= 1 and d <= 28){
            ok = true;
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
}