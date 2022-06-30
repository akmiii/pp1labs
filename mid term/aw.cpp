#include <bits/stdc++.h>
using namespace std;
int main()
{
  map<string,int> m;
  int n; cin >> n;
  for(int i=0;i<n;i++)
  {
    string s; int a;
    cin >> s >> a;
    m[s]+= a;
  }
  map<string,int> :: iterator it;
  int mx = 0;
  for(it=m.begin();it!=m.end();it++)
  {
      if(mx < it->second){
          mx = it->second;
      }
  }
  for(it=m.begin();it!=m.end();it++){
      if(mx == it->second){
          cout << it->first << " " << "is lucky" << endl;
      }
      else{
          cout << it->first << " " << mx-it->second << endl;
      }
  }
}