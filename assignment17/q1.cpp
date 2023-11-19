#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    int n=s.length();
  int i=0;
  while(i<=n){
    if(i%2!=0){
        s[i]='#';
        
    }
    i++;
  }
    cout<<s;
}

