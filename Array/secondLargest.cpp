#include<iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[6]={1,2,4,7,7,6};
    int largest=arr[0];
    int secondlargest=INT_MIN;
    for(int i=0;i<6;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];   
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    cout<<largest<<endl;
    cout<<secondlargest<<endl;

}