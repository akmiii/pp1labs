#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<string> set;
    multiset<int> ms;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string name;
        int marks;
        cin >> name >> marks;
        set.insert(name);
        ms.insert(marks);
    }
    
    multiset<string> :: iterator it;
    multiset<int> :: iterator i = ms.begin();
    
    for(it = set.begin(); it != set.end(); it++){
        cout << *it << " " << *i << endl;
        i++;
    }
}
