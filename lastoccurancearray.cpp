#include<iostream>
#include <vector>
 using namespace std;
int main()
{ int n;
 cout<<"enter element size : ";
cin>>n;
     vector<int> v(n);
     cout<<"Enter Number in array : ";
   for(int i=0; i<n; i++){
    cin>>v[i];

     }

  for (int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
cout<<endl;

cout<<"Enter key want you find at index: ";
 int key;

 cin>>key;
 
 int find=-1; 
 
 for(int i=0;i<v.size(); i++)
  {
    if(key==v[i]){
        find=i;
    }
  }
 cout<<"AT INDEX : ";
 cout<<find<<endl;

 
 }