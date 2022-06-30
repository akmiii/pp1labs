#include <bits/stdc++.h> 
using namespace std;

int main(){
    long double d, c, n;
    cin >> d >> c >> n;

    long double di, ci;
    cin >> di >> ci;

    long double stoim = (d * 100 + c) * n;
    //cout << stoim << endl;

    long double est = di * 100 + ci;
    //cout << est << endl;

    long double answer;

    if (stoim > est){
        cout << -1;
        return 0;
    }
    else {
        answer = est - stoim;
    }

    cout << (int)answer / 100 << " " << (int)answer % 100;
}