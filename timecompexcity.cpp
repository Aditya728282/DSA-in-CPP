// formula of A.P. = n(2a+(n-1)*d)/2;
// n=size;
// a= first number;
// d=1;


#include<iostream>
using namespace std;
int sum(int x, int y){
    int a=x;
int n=(y-x+1);
int sum_range=(n*(2*a+(n-1)*1))/2;
cout<<sum_range;
}
int main(){
    int x=2;
    int y=6;
    sum(x,y);
    //cout<<sum_range;
}