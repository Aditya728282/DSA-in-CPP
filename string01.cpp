#include<iostream>
using namespace std;

int main(){

 char name[256];
 char movie[257];

 cout<<"Enetr your Full name: "<<endl;  
 cin.getline(name , 256);

 cout<<"Enter your Movies Name: ";
 cin.getline(movie,256);

 cout<<"My name is: "<<name<<endl;
 cout<<"Movie Name is : "<<movie<<endl;
 return 0;
}