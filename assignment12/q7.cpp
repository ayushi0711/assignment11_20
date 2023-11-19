#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element in array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
   int i=0; 
   int j=n-1;
   bool flag=true;
   while(i<j){
    if(arr[i]!=arr[j]){
        flag=false;
        break;
    }
i++;
j--;
   }
   if(flag==true){
    cout<<"array is palindrome";
   }else{
    cout<<"array is not palindrome";
   }

     
     
}