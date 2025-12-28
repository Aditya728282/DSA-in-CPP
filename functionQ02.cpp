#include<iostream>
#include<math.h>
using namespace std;
double area (int r){      // this function use for are of circle formula is 2-pi-r-square
    return 3.142*(r*r); 
}
double curcumtance(int r){
    return (2*3.142*r);
}

 int main(){
    int x;
    cout<<"enter radius of circle: ";
    cin>>x;
    cout<<"area of circle is : "<<area(x)<<endl;
    cout<<"area of curcumtance is : "<<curcumtance(x)<<endl;


 }