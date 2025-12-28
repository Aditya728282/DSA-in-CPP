#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
vector<int>v;
v.push_back(4);
v.push_back(7);
v.push_back(5);
v.push_back(9);
v.push_back(3);
cout<<endl;
cout<<"search element "<<binary_search(v.begin() , v.end(),4)<<endl;
int a=5;
int b=7;
cout<<"The Greatest number is : "<<max(a,b)<<endl;
cout<<"The smallest number is : "<<min(a,b)<<endl;

// swap two number 
swap(a,b);
cout<<"swap number is : "<<a<<endl;
cout<<"swap number is : "<<b<<endl;
cout<<endl;


// string reverse 
  string vowel = "a i o u e";
  reverse(vowel.begin() , vowel.end());
  cout<<"REVERSE THE VOWEL : "<<vowel<<endl ;
  cout<<endl;

// Rotate function
  rotate(v.begin(),v.begin()+1,v.end());
  for(auto i:v){
    cout<<"The rotate Number is : "<<i<<endl;
  }cout<<endl;

// sort the any number
   sort(v.begin(),v.end());
   for(auto i: v){
    cout<<"sorting element is : "<<i<<endl;
   }
    return 0;
 }
