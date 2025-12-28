#include<iostream>
using namespace std;
int main(){
    
    int i=5;
    int *p=&i;
    int **p2=&p;

     cout<<"2nd Part"<<endl<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl<<endl;
    
    cout<<"3RD Part"<<endl<<endl;

    cout<<&i<<endl;
    cout<<*p2<<endl;
    cout<<p<<endl;

    cout<<"4RTH Part"<<endl<<endl;



}