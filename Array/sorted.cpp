#include<iostream>
using namespace std;
bool checkArraySorting(int arr[],int n){
    for (int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){

        }
        else return false;
    }
    return true;
}

int main(){
    int arr[5]={1,3,4,6,7};
    int a[6]={1,2,3,2,1,6};
    if(checkArraySorting(arr,5)){
        cout<<"Array is sorted"<<endl;
    }
    else cout<<"Not sorted"<<endl;
    if(checkArraySorting(a,6)){
        cout<<"Array is sorted"<<endl;
    }
    else cout<<"Not sorted"<<endl;

}