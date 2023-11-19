#include<iostream>
using namespace std;
int main(){
   
   int n;
   cout<<"enter the number of  rows of 1st matrix"<<endl;
   cin>>n;
    int m;
   cout<<"enter the number of  columns of 1st matrix"<<endl;
   cin>>m;
   int a[n][m];
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>a[i][j];
    }
   }
  
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(i==n/2 || j==m/2){
            cout<<a[i][j]<<" ";
        }
        else{
            cout<<" "<<" ";
        }
    }
    cout<<endl;
  }
   
   }