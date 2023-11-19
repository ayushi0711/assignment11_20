#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of rows";
    cin>>m;
    int n;
    cout<<"enter the number of column";
    cin>>n;
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int copy[m][n];
       for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           copy[i][j]=a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(copy[i][j]==0){
             for(int c=0; c<n; c++){
                a[i][c]=0;
             }   
             for(int r=0; r<m; r++){
                a[r][j]=0;
             }
            }
            
        }
      


    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
  

}