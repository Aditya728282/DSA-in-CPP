#include<iostream>
#include<string.h>
using namespace std;

// find the length of string

int getLenght(char name[] ){
      int i=0;
      int length=0;
    while(name[i] != '\0' ){
        length++;
        i++;
    }
    return length;
}

int main(){
char name[100];
cout<<"Enter your name :"<<endl;
cin>>name;
 
cout<<"Size is by using funtion : "<<getLenght(name)<<endl; // by using funtion

// predefine Funtion by get length
cout<<"Size is by Predefine : "<<strlen(name)<<endl;

}
