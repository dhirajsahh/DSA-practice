#include<iostream>
#include<vector>
using namespace std;
int findmissingNumber(int arr[],int n){ 
    int xor1=0;
    for (int i=0;i<n;i++){
        xor1=xor1^arr[i];
    }
    return xor1;


}
int main(){
    int arr[]={1,2,3,2,1,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int missing=findmissingNumber(arr,n);
    cout<<missing<<endl;
    
}