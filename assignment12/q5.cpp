#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
int even;
int odd;
      for(int i=1; i<=n; i++){
        if(i%2==0){
            a[i]+=10;
        }
        else{
         a[i]=2*a[i];

        }
          cout<<a[i]<<" ";
        
    }
  return 0;

      
}