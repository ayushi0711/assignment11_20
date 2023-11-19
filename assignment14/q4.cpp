#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows/column of matrix";
    cin>>n;
     
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    //since array is already sorted
    int max=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
             max=a[n-1][n-1];
        }
    }
    cout<<max;
}