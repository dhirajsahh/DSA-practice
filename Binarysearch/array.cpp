#include<iostream>
using namespace std;

int main(){
	int a[10]={2,10,20,30,3,4};
	int li=0;
	int ui=5;
	int data;
	cout<<"Enter the data to be entered"<<endl;
	cin>>data;
	int k=ui;
	while (k>=li){
		a[k+1]=a[k];
		k--;
	}
	a[li]=data;
	ui=ui+1;
	for(int i=0;i<=ui;i++){
		cout<<a[i]<<" ";
	}
	
	
}