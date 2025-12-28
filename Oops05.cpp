#include<iostream>
using namespace std;


// 2.  Multi level inherintance 

class parents{
    public:
         parents(){
             cout<<"Parent classs"<<endl;
          }

};

class child : public parents{
   public:
   child(){
    cout<<"Child class"<<endl;
   }
};

class child2: public child{
    public:
    child2() {
      cout<< "Grand Child"<<endl;
    }
    
};

int main(){
 child2 g;

 return 0;
}