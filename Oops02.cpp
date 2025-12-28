#include<iostream>
using namespace std;

class Rectangle{
 public:
 int l;
 int b;


 // Constructor

   // 1. Default Constructor
   Rectangle(){
      l=0;
      b=0;
   }
   

  // 2. Paramater Constructor
  Rectangle(int x, int y){
     l=x;
     b=y;
  } 

  // 3. Copy Constructor
  Rectangle(Rectangle &r){
    l=r.l;
    b=r.b;
  }

// Destructor 
~Rectangle (){
    cout<<"Destructor function called"<<endl;
}

};

int main (){

 // Object 1   
Rectangle*r1= new Rectangle();
cout<<r1->l<<" " << r1->b<<endl;
delete r1;

// object 2
Rectangle r2(3,4);
cout<<r2.l<<" " << r2.b<<endl;

// object 3
Rectangle r3= r2;
cout<<r3.l<<" " << r3.b<<endl;

}