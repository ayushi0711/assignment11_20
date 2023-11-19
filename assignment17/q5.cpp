#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin >> s;
int n=s.length();
int x=0;
for(int i=0; i<n;i++){
    x*=10;
    x+=s[i]-48;//we subtract 48 becouse when we add s[i] in x it take it as ascii value to make  it integer we do it.
  }
cout<<x<<endl;
}