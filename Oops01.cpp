#include<iostream>
using namespace std;

class fruit{
    public:
    string name;
    string color;

};


int main(){
// Object creation

   // static data
  fruit apple;
  apple.name="Apple";
  apple.color="Red";

  cout<<"fruit Name is: "<<apple.name<<endl;
  cout<<"fruit colour is: "<<apple.color<<endl;
  cout<<endl;
 

  // Dynamic data
  fruit*mango= new fruit();
  mango->name="Mango";
  mango->color="Yellow";
    
  cout<<"fruit Name is: "<<mango->name<<endl;
  cout<<"fruit colour is: "<<mango->color<<endl;

}