#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
 string t=s;
 reverse(t.begin(),t.end());
   s=s+t;
   cout<<s<<endl;

}
