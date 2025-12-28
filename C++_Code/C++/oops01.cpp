#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int Roll_no;

    // getter
    int getfees(){
        return fees;
    }
    // setter
    void setfees(int f){
        fees = f;
    }
    
    private:
      int  fees;

};


int main(){
 student obj1;
 obj1.name="RAM";
 obj1.Roll_no = 16;

 obj1.setfees(5000);
 cout<<obj1.getfees()<<endl;

 cout<<"Student Name : "<<obj1.name<<endl;
 cout<<"Student Roll no. : "<<obj1.Roll_no<<endl;


}