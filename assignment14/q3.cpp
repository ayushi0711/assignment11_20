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
   cout<<"enter the the first cordinate";
   int l1,r1;
   cin>>l1>>r1;
    cout<<"enter the the second cordinate";
   int l2,r2;
   cin>>l2>>r2;
   int sum=0;
   for(int i=l1; i<=l2; i++){
    for(int j=r1; j<=r2; j++){
        sum+=a[i][j];
    
    }
    
   }
 cout<<sum;
   
   }