#include<iostream>

#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    int n=s.size();
    int count=0;
    for(int i=0; i<n; i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            count++;
               
        }
    
      
    }

cout<<count;

}