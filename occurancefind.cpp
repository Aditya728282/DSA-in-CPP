#include <iostream>
#include<vector>
 using namespace std;
  int main(){
    vector<int> v(5);
  for(int i=0; i<5; i++ ){
    cin>>v[i];
  }
  cout<<endl;

cout<<" enter x:  ";
 int x;
 cin>>x;
 int occurance=-1;
for(int i=0; i<v.size(); i++){ 
  if(v[i]==x){
    occurance=i;
      }
} cout<<occurance<<" ";

 if(occurance==-1){
  cout<< "this number is not available ;";
 }
 return 0;
}