#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int *ptr = &num;
    cout<<"Address of numbar: "<<ptr<<endl;
    cout<<"Value of num: "<<*ptr<<endl;

    double d=6.5;
    double *ptr1= &d;
    cout<<"Address of numbar: "<<ptr1<<endl;
    cout<<"Value of num : "<<*ptr1<<endl;


    float f=7;
    float *ptr2 = &f;
    cout<<"Address of numbar: "<<ptr2<<endl;
    cout<<"Value of num : "<<*ptr2<<endl;

// size float , int , double , pointer  ;


cout<<" Size of integer : "<<sizeof(num)<<endl;
cout<<" Size of float : "<<sizeof(f)<<endl;
cout<<" Size of double : "<<sizeof(d)<<endl;
cout<<" Size of Pionter : "<<sizeof(ptr1)<<endl;


// Important concept 
int i=3;
int *p=&i;
cout<<"Adress of i: "<<p<<endl;
cout<<"Value of i IS: "<<*p<<endl;
cout<<"The Value is Increment By one: "<<(*p+1)<<endl;
cout<<"The Address is Increment By one: "<<p++ <<endl;

}