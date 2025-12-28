#include<iostream>
using namespace std;


// Single Inheritance 

class parents{
public:
     parents(){
        cout<<"Parents class"<<endl;
     }
};

class Child: public parents{
public:
    Child(){
        cout<<"Child class"<<endl;
    }
};

int main(){
    
    Child c ;
    return 0;
}
