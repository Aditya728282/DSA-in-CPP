#include<iostream>
using namespace std;
int main(){
    char name[100];

    cout<<"Enter Your Name: "<<endl;

    cin>>name;

    for(int i=0; i<5; i++){
        cout<<name[i]<<" ";
    }
}