#include<iostream>
using namespace std;

// BITWISE OPERATOR : 
   // << Leftshift Operator
   // >> Rightshift Operator
   // $ Bitwise AND Operator
   // | Bitwise OR operator

int main(){
    int num1=5; //5= 101
    cout<<(num1<<1)<<endl; // 1010 = 10
    cout<<(num1>>1)<<endl; // 0010 = 2
    cout<<endl;

     int num2=8;
     cout<<(num1&num2)<<endl; // 0
     cout<<(num1| num2)<<endl; // 1101 = 13

return 0;

 
}
