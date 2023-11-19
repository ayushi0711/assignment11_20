#include<iostream>
#include<climits>
using namespace std;
int factorial(int m){
    int factorial=1;
    for(int i=2; i<=m; i++){
        factorial*=i;
    }
    return factorial;

    
}

int main(){
   
    int n;
    cout<<"enter the number of element in array"<<" ";
   cin>>n;
   int arr[n];
   cout<<"enter the  element in array"<<" ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   
       int max=INT_MIN;
      for(int i=0; i<n; i++){
      if(max<arr[i]){
        max=arr[i];
        }
    } 
    cout<<max<<endl;  
    int m=max;
    
      cout<<factorial(m)<<endl;
    
    
    return 0;
}