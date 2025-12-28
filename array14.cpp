#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main() {
  vector<int>v ;

 v.push_back(1);
 v.push_back(2);
 v.push_back(3);
 v.push_back(4);
 v.push_back(5);
 

 // Print all element in vector 
 for(int i= 0; i<v.size(); i++){
   cout<<v[i]<<endl;
 }



  // Reverse the elements in the vector.
  cout<<endl;
  reverse(v.begin(), v.end());
  

  // Print the reversed vector.
  cout<<"Reversed Element"<<endl;
  for (int i = 0; i < v.size(); i++) {
    cout <<v[i] << endl;
  }

  return 0;
}