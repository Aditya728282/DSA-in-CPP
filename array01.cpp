// array taken by user then print all element :

#include<iostream>
using namespace std;
int main(){
    int a;      // taken size of array
    cout<<" Enter size of array : ";
    cin>>a;
    int arr[a];
    cout<<" Enter element of array under " <<a<<": "  ;
    for(int i=0; i<a; i++){
       cin>>arr[i]; // taken array element by user 
    }
    for(int i=0; i<a; i++){
        cout<<arr[i]<<" "; // print array element 
    }
  return 0;
}