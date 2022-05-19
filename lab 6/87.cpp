#include <bits/stdc++.h>
using namespace std;
char getRes(char c){
    if(c >= 'a' and c <= 'z') return c - 32;
    return c;
}
int main(){
    char c;
    cin >> c;
    cout << getRes(c);
}