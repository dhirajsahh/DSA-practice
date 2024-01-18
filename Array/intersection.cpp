#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector<int> intersectionofArray(vector<int>v1,vector<int>v2){
   int n1=v1.size();
   int n2=v2.size();
   int i=0;
   int j=0;
   vector<int>v3;
   while(i<n1||j<n2){
      if(v1[i]<v2[j]) i++;
      else if(v1[i]=v2[j]){
        v3.push_back(v1[i]);
        i++;
        j++;
      }
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
   v2.push_back(6);
   v2.push_back(7);
   v2.push_back(9);
   v2.push_back(11);
   vector<int>v3=intersectionofArray(v1,v2);
   display(v3);
}