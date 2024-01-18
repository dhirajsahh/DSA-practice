#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&nums){
    int n=nums.size();
    for (int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
vector<int> unionarray(vector<int>v1,vector<int>v2){
    int n1=v1.size();
    int n2=v2.size();
    int i=0;
    int j=0;
    vector<int>v3;
    while(i<n1&&j<n2){
        if(v1[i]<=v2[j]){
          if(v3.size()==0||v3.back()!=v1[i]){
            v3.push_back(v1[i]);
          }
          i++;
        }
        else{
           if(v3.size()==0||v3.back()!=v2[j]){
            v3.push_back(v2[j]);
          }
          j++; 
        }
    }
    while(i<n1){
        if(v3.size()==0||v3.back()!=v1[i]){
            v3.push_back(v1[i]);
          }
          i++;
    }
    while(j<n2){
        if(v3.size()==0||v3.back()!=v2[j]){
            v3.push_back(v2[j]);
          }
          j++;  
    }
    return v3;
    
}
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(6);
   vector<int>v2;
   v2.push_back(2);
   v2.push_back(3);
   v2.push_back(5);
   vector<int>v3=unionarray(v1,v2);
   display(v3);
   
    

}