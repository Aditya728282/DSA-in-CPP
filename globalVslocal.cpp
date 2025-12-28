#include<iostream>
using namespace std;

int x=5;

void fun(){
    int x=60;
    cout<<"Before Manipulation Global Variable:  "  << x<<endl;
    ::x=77;
    cout<<"After manipulate global varible:  "<<::x<<endl;
    }

int main(){

    int x=33;
    cout<<"local variable call:  " <<x<<endl;  // local variable

    cout<<"Global variable call: "<<::x<<endl;

    {
        int x=20;
        cout<<"2nd local variable call: "<<x<<endl;

    }
   
   fun();

   return 0;
}