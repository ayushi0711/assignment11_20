#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter target :";
    cin>>x;
   
    int n;
    cout<<"enter array size:";
    cin>>n;
    cout<<"enter the array elements :";
    int q[n];
    for(int i=0; i<n; i++){
        
        cin>>q[i];
        
    }
    int count=0;
    for(int i=0; i<n;i++){
        if(q[i]>x){
            count++;
        }
     
    }
     cout<<count;  

}