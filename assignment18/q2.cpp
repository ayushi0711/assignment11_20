#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
     cin>>str;
     int n=str.length();
     char max1='!';
     char max2='!';
     for(int i=0; i<n; i++){
        if(max1<str[i]){
            max2=max1;
            max1=str[i];
        }
        else if(max2<str[i] && max1!=str[i]){
             max2=str[i];
        }
     }
        if(max2=='!'){
        cout<<"No second largest number";
        }
        else{
            cout<<max2<<endl;
        }

   
    }

