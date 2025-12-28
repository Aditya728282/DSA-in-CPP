#include<iostream>
using  namespace std;

class Animal{
    public:
    int age;
    string name;
    int weight;
     
  //# 1.  Default Constructor
    Animal(){
    this ->weight = 10;
    this->age=2;
    this->name= "CAT";
    cout<<"Default Constructor Called "<<endl;
  }

  //#2. Parameter Constructor
  Animal(int age , string name , int weight){
    this->age= age;
    this->name= name;
    this->weight = weight;
    cout<<"Parameter Constructor Called "<<endl;
  }

  
  //#3.Copy Constructor
  Animal(Animal & obj){

    this->age = obj.age;
    this->name = obj.name;
    this->weight = obj.weight;
    cout<<"We Are Inside the Copy Constructor "<<endl;
  }

};




int main(){
cout<<endl;
Animal a;
Animal *b = new Animal(5, "cat" , 10);

//Copy Constructor
Animal c = *b;

Animal anima1(c);
cout<<endl;

}