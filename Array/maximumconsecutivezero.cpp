#include<iostream>
using namespace std;

int main(){
    int arr[12]={1,1,0,0,1,1,1,0,1,1,1,1};
    int max1=0;
    int count=0;
    for (int i=0;i<12;i++){
      if(arr[i]==1){
        count++;
        max1=max(count,max1);
      }  
      else{
        count=0;
      }
    }
    cout<<max1<<endl;
}