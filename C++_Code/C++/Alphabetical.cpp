#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter A Character: ";
cin>>ch;
  
  if(ch>=65 && ch<=90  ||  ch>=97 && ch<=122){
     cout<<"Alphabets !"<<endl;
   }

  else{
     cout<<"Not Alphabets"<<endl;
  }


}