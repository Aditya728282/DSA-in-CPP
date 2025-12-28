#include<iostream>
using namespace std;
int main(){

int arr[10]={2,5,3,4,5};
 cout<<"Address of First Array: "<<arr<<endl;
 cout<<"Element of First Array: "<<arr[0]<<endl;

 cout<<"Element of First Array with pointer: "<<*arr<<endl;
 cout<<"Element Increment by One Array: "<<*arr+1<<endl;
 cout<<"Second Array by pointer: "<<*(arr+1)<<endl;
 
int arr1[10];
int *ptr=&arr[0];
cout<<"BEfore Address is : "<<ptr<<endl;
ptr= ptr+1;
cout<<"Adress is : "<<ptr<<endl;

}