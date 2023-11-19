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
    int p;
   cout<<"enter the number of  rows of 2nd matrix"<<endl;
   cin>>p;
    int q;
   cout<<"enter the number of  column of 2nd matrix"<<endl;
   cin>>q;
   int b[p][q];
   for(int i=0; i<p; i++){
    for(int j=0; j<q; j++){
        cin>>b[i][j];
    }
   }
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(n==p && m==q){
        a[i][j]+=b[i][j];
        cout<<a[i][j]<<" ";
      }
      
    }
    cout<<endl;
   }
}