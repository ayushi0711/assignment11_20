
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
 int n;
 cin>>n;

 vector<vector<int>> arr(n,vector<int>(n));

int minr=0, minc=0;
int maxr=n-1,maxc=n-1;
int a=1;
while(minr<=maxr && minc<=maxc){
    //right
    for(int j=minc;j<=maxc;j++){
        arr[minr][j]=a++;
    }
    minr++;
    if(minr>maxr || minc>maxc) break;
    //down
    for(int i=minr; i<=maxr; i++){
       arr[i][maxc]=a++;
    }
    maxc--;
    if(minr>maxr || minc>maxc) break;
    //left
    for(int j=maxc; j>=minc; j--){
      arr[maxr][j]=a++;
    }
    maxr--;
    if(minr>maxr || minc>maxc) break;
    //up
    for(int i=maxr;i>=minr; i--){
        arr[i][minc]=a++;
    }
    minc++;
}
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

}



