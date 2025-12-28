#include <iostream>
using namespace std;
int main(){
    int a=4;
    cout<<sizeof(a)<<endl; // 4
    int b=6;
    cout<<sizeof(b)<<endl; // 4

    char name = 'Ram';
    cout<<sizeof(name)<<endl; // 1

  // CONDITIONAL OPERATOR :
   a==b ? a=true : b=false ;
   cout<<b <<endl;
    
   bool flag;
   a==name? flag=true: flag= false ;
   cout<<flag<<endl; // false = 0
    
    cout<<(&a)<<endl; // address

}
