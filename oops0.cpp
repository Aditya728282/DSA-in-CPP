#include<iostream>
using namespace std;

class Animal{
// Private modifier
private:
int weight;

// public modifier
public:
string name;
int age;

void eating(){
    cout<<"eating"<<endl;
}

void sleeping(){
    cout<<"sleeping"<<endl;
}

// get funtion for private
int getWeight(){
 return weight;
}

// set funtion for private
int setWeight(int w){
 weight=w
} 

};


int main(){

 // object creation
Animal ramesh;
ramesh.name = "Lion"; 
ramesh.age = 22; 

cout<<"Name of Animal is : "<<ramesh.name<<endl;
cout<<"Age of Animal is : "<<ramesh.age<<endl;

ramesh.setWeight(101);
cout<<"weight of Animal is : "<<ramesh.getWeight()<<endl;
ramesh.sleeping();
ramesh.eating();

}