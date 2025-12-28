// Check Person is eligible for vot or not :-
#include<iostream>
using namespace std;
bool eligiblity(int age, int limit){
    if(age>=limit){
        cout<<"Yes you are eligible :"<<endl;
        return true;
    }
    else{
        cout<<"Not eligible : "<<endl;
        return false;
    }

}


int main(){
int age;
cout<<"Enter your age :";
cin>>age;

 cout<<eligiblity(age,18);
}