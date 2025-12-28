// SET IS STL THAT IS STORE A UNIQUE VALUE 


#include<iostream>
#include<set>
using namespace std;

int main(){
 set<int> s;
 s.insert(5);
 s.insert(5);
 s.insert(9);
 s.insert(9);
 s.insert(8);
 s.insert(7);
 s.insert(8);
 int n=s.size();
 for(auto i:s){
    cout<<i<<endl;
 }
  cout<<"The Number is Presence or Not : "<< s.count(7);
 cout<<endl;

}
