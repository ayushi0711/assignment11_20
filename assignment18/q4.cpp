#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    string t;
    cin>>t;
    cout<<t<<endl;
 
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
     cout<<"true";
    }
    else{
    cout<<"false";
    }


}
