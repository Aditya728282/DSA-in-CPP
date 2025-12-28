#include<iostream>
#include<list>

using namespace std;
int main(){
 list <int> l;
  l.push_back(1);
  l.push_back(2);
  l.push_back(3);

   cout<<"Size of list is : "<<l.size()<<endl;
   cout<<"front : "<<l.front()<<endl; // by know first element
   cout<<"back : "<<l.back()<<endl;  // by know last element 
   cout<<"Empty : "<<l.empty()<<endl; // by check  arr is empty OR Not

  for(int i: l){
   cout<<"The "<<i<<" element is : "<<i<<" "<<endl;
    }

  l.pop_back();  // remove last element
  l.pop_front(); // remove first element 

  for(int i:l){
    cout<<"After remove first and last then : " <<i<<" "<<endl;
   }
  
 return 0;
}