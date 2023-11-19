#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    int n=s.size();
       int i=0; 
       int j=n-1;
       bool flag=false;
       while(i<=j){
        if(s[i]==s[j]){
            flag=true;
        }
        else{
            flag=false;
        }
        i++;
        j--;
       }
       if(flag ==true){
        cout<<"Yes";
       }
       else{
        cout<<"no";
       }
    


}