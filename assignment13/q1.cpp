#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the target element"<<" ";
    cin>>x;
    int n;
    cout<<"enter the number of element in array"<<" ";
   cin>>n;
   int arr[n];
   cout<<"enter the  element in array"<<" ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool flag =false;
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
              sum+=arr[i]+arr[j]+arr[k];
                 if(sum==x){
                 flag=true;
               
               } 
           
              }
              
             }
          
             }
             if(flag==true){
                        cout<<"triplet sum exist"<<endl;
             }
              else{
                cout<<"triplet sum not exist"<<endl;
              }

                
        
    
    return 0;
}