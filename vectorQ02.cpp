// Count the number of element strickly greter than value of key ?

#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter element of 5 times : ";
    vector<int> v(5);
    for(int i=0; i<5; i++){
        cin>>v[i];
    }
   int key;
   cout<<"Enter key :";
   cin>>key;
   int ans=0;
   for(int i=0; i<v.size(); i++){
    if(v[i]>key){
        ans++;
    }
   }
   cout<<ans<<" :-"<<"This element is greater than "<<key;
   return 0;
}