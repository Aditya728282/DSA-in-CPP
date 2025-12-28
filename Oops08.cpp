#include<iostream>
using namespace std;

class math{
    public:

    int sum(int a, int b){
        cout<<" I am Sum 1: ";
        return a+b;
    }

    int sum(int a, int b , int c){
        cout<<" I am Sum 2: ";
        return a+b+c;
    }

    float sum(float a, float b){
        cout<<" I am Sum 3: ";
        return a+b;
    }
};

int main(){
 math M;
 cout<<M.sum(3,4)<<endl;
 cout<<M.sum(5,4, 1)<<endl;
 cout<<M.sum(3.142f , 2.144f)<<endl;

 return 0;
}