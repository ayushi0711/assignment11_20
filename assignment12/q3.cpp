#include <iostream>
using namespace std;
int main() {
int arr[5]={1,4,5,6,1};
for (int i = 1; i<=5; i++){
if (arr[i - 1] > arr[i]){
cout<<"array is not sorted"<<endl;
return 0;
}
}

cout<<"array is sorted"<<endl;
return 0;
}
   


