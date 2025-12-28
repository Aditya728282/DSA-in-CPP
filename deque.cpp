#include<iostream>
#include<deque>

using namespace std;
int main(){
 deque <int> d;
  d.push_back(1);
  d.push_back(2);
  d.push_back(3);

    // first index at element is find by 
     cout<<"Print first Index element : "<<d.at(1)<<endl;

   cout<<"front : "<<d.front()<<endl; // by know first element
   cout<<"back : "<<d.back()<<endl;  // by know last element 
   cout<<"Empty : "<<d.empty()<<endl; // by check  arr is empty OR Not

  for(int i: d){
   cout<<i<<" "<<endl;
    }

  d.pop_back();  // remove last element
  d.pop_front(); // remove first element 

  for(int i:d){
    cout<<"After remove first and last then : " <<i<<" "<<endl;
   }
  
 return 0;
}