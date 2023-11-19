#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    int n=s.size();
    reverse(s.begin()+n/2,s.end());
    cout<<s;

}