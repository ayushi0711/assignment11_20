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
int maxsum=-1;

int rowindex=-1;
for(int i=0; i<n; i++){
       int sum=0;
    for(int j=0; j<m; j++){
        sum+=a[i][j];
     }
     if(sum>maxsum){
        maxsum=sum;
        rowindex=i;
     }
}
cout<<maxsum<<" "<<rowindex;
   
   }