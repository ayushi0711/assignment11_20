#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    
    int m;
    cout<<"enter the number of column";
    cin>>m;
    
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
cout<<endl;
   for(int j=0; j<m; j++){
    if(j%2==0){
        for(int i=n-1; i>=0; i--){
            cout<<a[i][j]<<" ";
        }

        }else{
            for(int i=0; i<n; i++){
                cout<<a[i][j]<<" ";
            }
        }
        
    }
   }
  
  


