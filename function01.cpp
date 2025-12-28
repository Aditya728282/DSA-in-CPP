// PASS by VALUE 
//In this value is passed as any type or different type 

#include<iostream>
using namespace std;
int changevalue(int z ){
    z=100;
 
}
int main(){
int a=5;

cout<<changevalue(a);
}