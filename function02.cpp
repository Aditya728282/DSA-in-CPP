// PASSAED BY REFRENCE VALUE 
// in this value is passed as same in function 

#include<iostream>
using namespace std;
int value(int &y, int &z){
    y=99;
    z=100;
}

int main(){
int a = 5;
int b = 6;

value(a,b);
cout<<a<<endl<<b<<endl;
}