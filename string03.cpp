#include<iostream>
using namespace std;

// find length

int getLength(char name[]){
    int length= 0;
    int i=0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}


// Reverse string 
int ReverseCharArray(char name[]){
    int i=0;
    int n = getLength(name);

    int j= n-1;
     while( i<=j ){
       swap(name[i] , name[j]);
    }
}


int main(){
char name[100];
cout<<" Enter Your Name: ";
cin>>name;
getLength(name);
cout<<"Reverse of Given Name: "<<ReverseCharArray(name)<<endl;

}
