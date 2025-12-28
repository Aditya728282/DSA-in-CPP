#include<iostream>
#include <vector>
 using namespace std;
 int main(){
     vector<int> v;

     //TAKING INPUT IN VECTOR BY USER
   
     int n;
     cout<<"ENTER ELEMENT : ";
     cin>>n;
     cout<<"ENTER NUMBER : ";
   for(int i=0; i<n; i++){
   int element;
    v.push_back(element);
    cin>>v[i];

 }
 for(int i=0; i<v.size(); i++){
    cout<<v[i];
 }
 
 
 
//INSERT A NEW ELEMENT IN VECTOR

 cout<<endl;
 v.insert(v.begin()+2,7);
 for(int i=0; i<v.size(); i++){
 cout<<v[i]<<" ";}

//ERASE A ELEMENT FROM VECTOR
cout<<endl;
 v.erase(v.end()-2);
  for(int i =0; i<v.size(); i++){
    
     cout<<v[i]<<" ";
  }
 }
 