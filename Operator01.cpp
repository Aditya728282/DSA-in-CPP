#include <iostream>
using namespace std;
int main(){
   cout<<"ARITHMETIC OPERATION"<<endl;
 // Arthimetic Operator
    // + , - , * , / 
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a number: ";
    cin>>b;
    cout<<"Addition of two number is : " <<a<<"+"<<b<< "="<<a+b <<endl;
    cout<<"Subtraction of two number is : " <<a<<"-"<<b<< "="<<a-b <<endl;
    cout<<"Multiply of two number is : " <<a<<"*"<<b<< "="<<a*b<<endl ;
    cout<<"Divide of two number is : " <<a<<"/"<<b<< "="<<a/b <<endl;
    cout<<endl;

cout<< "RELATIONAL OPERRATOR"<<endl;
// Relational Operator 
   // == Equal equal to
   // ! Not Equal to
   // < less thab 
   // >= Greater than equal to
   // <= Less than equal to
   
   cout<<(a==b)<<endl;  // False
   
   cout<<(a!=b) <<endl; // True
   cout<<(a>=b)<<endl; // FAlse 
   cout<<(a>=b)<<endl; // False 
   cout <<( a<b)<<endl ;     // True
   
cout<<"LOGICAL OPERATOR"<<endl;
// Logical Operator
   // && logical and
   // || logical or 
   // ! logical not 
   bool exp1=true;
   bool exp2=false;
   cout<<(exp1&&exp2)<<endl; // False
   cout<<(exp1||exp2)<<endl; // True
   cout<<(!exp2)<<endl;  //True


return 0;
}