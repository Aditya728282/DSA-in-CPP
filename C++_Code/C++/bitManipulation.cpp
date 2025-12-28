#include<iostream>
using namespace std;

int main(){
int a=23, b=17;

// #1. OR                    1 1  = 1 , 0 1= 1 ,  0 0 = 0 , 0 1 =  1;
int orOperation=a | b;
cout<<"OR : "<<orOperation<<endl;

// #2. AND
int andOperation=a&b;
cout<<"AND : "<<andOperation<<endl;


//#3. Nagation(~)  EX:- 23 = -(23+1)   ;
cout<<"Negation: "<<~a<<endl;
cout<<endl;

// #4 Left Shift ( << )  : MULTIPLY
cout<<"Left Shift : "<<endl;
cout<< (a<<1) <<endl;
cout<< (a<<2) <<endl;
cout<< (b<<1)<<endl;
cout<< (b<<2)<<endl;

cout<<endl;

// #4 Right Shift ( << )  :  Divide Operation
cout<<"Right Shift : "<<endl;
cout<< (a>>1) <<endl;
cout<< (a>>2) <<endl;
cout<< (a>>3)<<endl;
cout<< (a>>4)<<endl;

cout<<endl;

// #5. TO CHECK THE NUMBER ID EVEN OR ODD
 int num = 8;
 if((num & 1) == 0){
    cout<<"Given Number Is Even: "<<num<<endl;
 }
 else if((num & 1) == 1){
    cout<<"Given Number IS Odd: "<<num<<endl;
 }

}