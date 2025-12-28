#include<iostream>
using namespace std;
void update(int *ptr){
    *ptr=*ptr *2;

}


int main(){
 int num=10;
 update(&num);
 cout<<num<<endl;
 
}