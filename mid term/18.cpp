#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    double even_p, odd_p;
    double cnt_odd = 0, cnt_even = 0;
    int numbers;
    while (n > 0){
        cin >> n;
        if (n % 2 == 1 and n > 0) cnt_odd++;
        if (n % 2 == 0 and n > 0) cnt_even++;
    }
    numbers = cnt_odd + cnt_even;
    //cout << cnt_odd << " " << cnt_even;
    even_p = (100 * cnt_even) / numbers;
    odd_p = (100* cnt_odd) / numbers;
    printf ("%.5f", even_p);
    cout << " ";
    printf ("%.5f", odd_p);
}