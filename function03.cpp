// DEFAULT PARAMETER :

#include<iostream>
using namespace std;
int defaultvalue(int a, int b=1, int c=3){
    return(a+b+c);

}


int main(){
    cout<<defaultvalue(2)<<endl; //taken as default value 2+1+3=6
    cout<<defaultvalue(2,3)<<endl; // 2+3+3=8

    cout<<defaultvalue(2,1,3); // 6
    return 0;
}