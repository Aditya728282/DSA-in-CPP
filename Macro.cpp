#include<iostream>
using namespace std;

// Macro initialized
#define Pi 3.14152

#define Max(x,y) (x > y ? x : y)


float areaCircle(int r){
    return Pi*r*r;
}

float areaPara(int r){
    return 2*Pi*r;
}

void fun1(){
   int x=9;
   int y=7;
      
   int z = Max(x,y);
   cout<<z<<endl;
}

void fun2(){
   int a=2;
   int b=6;
   int c = Max(a,b);
   cout<<c<<endl;
}

void fun3(){
   int p=9;
   int q=7;
      
   int r = Max(p,q);
  cout<<r<<endl;
}
int main(){
 
cout<<areaCircle(5)<<endl;
cout<<areaPara(3)<<endl;

 fun1();
 fun2();
 fun3();

return 0;

}