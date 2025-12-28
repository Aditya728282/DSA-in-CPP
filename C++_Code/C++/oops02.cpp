#include<iostream>
using namespace std;

class animal{
 public:
  string name;
  int age;
  int weight;
  
};


int main(){


  cout<<"IN static Memory : "<<endl;
  // static Mememory Allocation
  animal a;
  a.name= "CAT";
  a.age=2;
  cout<<a.name<<endl;
  cout<<a.age<<endl;
  cout<<endl;
  cout<<"In Dynamic memory Allowcation: "<<endl;


  // Dynamic Memory Allocation
  animal* b = new animal;
  b->name= "MONKEY";
  b->age = 5;
  cout<<b->name<<endl;
  cout<<b->age<<endl;
  cout<<endl;

}
