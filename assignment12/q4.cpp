#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int sumO=0;
    int sumE=0;
      for(int i=1; i<=n; i++){
        if(i%2==0){
            sumE+=a[i];
        }
        else{
            sumO+=a[i];
        }
        
    }
      cout<<sumO-sumE<<endl;  

}