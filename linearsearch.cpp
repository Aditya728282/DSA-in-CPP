#include <iostream>7
using namespace std;
bool search(int arr[],int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    } return 0;
}


int main()
{ int key;
cout<<"enter number would you like find\n";
cin>>key;
int arr[6]={2,4,7,8,9,3};
 bool find= search(arr,6,key);
 if(find )
 cout<<"present in this array";
 else
 cout<<"absent this number";
 
 return 0;
}