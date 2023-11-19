#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows/column";
    cin>>n;
    
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
   
  
    for(int i=0; i<n; i++){
         
        for(int j=i+1; j<n; j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
            
         
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
for(int k=0; k<n; k++){
int i=n-1;
int j=0;
while(j<=i){
    int temp=a[j][k];
    a[j][k]=a[i][k];
    a[i][k]=temp;
    j++;
    i--;
}
    }
       
       
    
      for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}