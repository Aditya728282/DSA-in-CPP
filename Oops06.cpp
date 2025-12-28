#include<iostream>
using namespace std;


// 3. Multi-Inheritance 

class parents1{
    public:
    parents1(){
        cout<<"Parents Class 1"<<endl; 
    }
};

class parents2{
    public:
    parents2(){
        cout<<"Parents Class 2"<<endl;
    }
};

class Child: public parents1 , public parents2 {
public: 
  Child(){
     cout<<"Child class"<<endl;
  }
};

int main(){
    Child c;
    return 0;
}
