#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the number of 5 size : ";
    vector<int> v(5);
    for (int i=0; i<v.size(); i++){
        cin>>v[i];
    } 
    cout<<"inter key that the greater to your number :  ";
    int key;
    cin>>key;
  int count=0;;
 for(int i=0; i<v.size(); i++){
   if(v[i]>key){
    count++;
 cout<<v[i]<<" " <<endl;
   }
 } cout<<"the number of greater than is :  "<<count<<endl;


}
