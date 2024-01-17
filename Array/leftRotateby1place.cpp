#include<iostream>
using namespace std;
int rotatebyoneplace(int a[],int n){
    int temp=a[0];
    for (int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
}
int display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,};
    display(arr,7);
    rotatebyoneplace(arr,7);
    display(arr,7);
}