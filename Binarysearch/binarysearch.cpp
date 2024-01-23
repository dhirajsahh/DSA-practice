#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int arr1[]={2,4,5,6,7};
    int arr2[]={1,2,5,6,7,9};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int index1=binarysearch(arr1,n1,2);
    int index2=binarysearch(arr2,n2,11);
    cout<<index1<<endl;
    cout<<index2<<endl;
}