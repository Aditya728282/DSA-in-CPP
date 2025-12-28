// checked the element is present or not and present then at which index on present  

#include<iostream>
#include<vector>

using namespace std;
int main(){
vector<int>v(6);
cout<<"Enter Array : ";
for(int i=0; i<6; i++){
    cin>>v[i];
}
int key; 
cout<<"Enter key : ";
cin>>key;

int ans=-1;
  for(int i=0; i<v.size(); i++){
      if(key==v[i]){
        ans=i;
      }
  }
  cout<<ans;
}