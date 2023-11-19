
#include<iostream>
#include<vector>
#include<cmath>

#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"enter array size:";
    cin>>n;
    cout<<"enter the array elements :";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    sort(v.begin(),v.end());
       for(int i=0; i<n; i++){
        for(int j=n-3; j<n; j++){
        cout<<v[j]<<" ";

        }
        break;
    }
    
 

}