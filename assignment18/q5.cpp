 
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
int main(){
    string s ="i am pwian";
    string word ="";
    string maxword ="";
    int n=s.size();
    for(int i=0; i<n; i++){
        if(s[i]==' '){
            maxword=max(maxword,word);
            word="";

        }
        else{
            word+=s[i];
        }
    }

    maxword=max(maxword,word);
    cout<<maxword<<endl;

}
