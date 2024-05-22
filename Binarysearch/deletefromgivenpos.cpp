#include<iostream>
using namespace std;
int main(){
	int a[10]={2,10,20,30,3,4};
	int li=0;
	int ui=5;
    int pos;
    cout<<"enter the pos"<<endl;
    cin>>pos;
    int k=pos;
    while(k<=ui){
        a[k]=a[k+1];
        k++;
    }
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
    }