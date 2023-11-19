#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x=0;
     bool flag= false;
      for(int i=0; i<n; i++){
     if(arr[i]!=x){
        flag=true;     
          cout<<x;
          break;

         }
         else{
          x++;
      }
     if(flag==false) cout<<x<<endl;
     return 0;
       } }
  
    
