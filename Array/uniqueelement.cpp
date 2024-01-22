#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int xor1=0;
    for (int i=0;i<n;i++){
         xor1=xor1^arr[i];
    }
    cout<<xor1<<endl;
}
