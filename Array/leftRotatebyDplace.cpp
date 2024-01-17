#include<iostream>
using namespace std;
int display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reversearray(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    k=k%n;
    reversearray(arr,0,k-1);
    reversearray(arr,k,n-1);
    reversearray(arr,0,n-1);
    display(arr,n);
}