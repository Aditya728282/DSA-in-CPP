#include<iostream>
using namespace std;
int printArr(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i];
        cout<<" ";
    }
}
int altArr(int arr[], int n){
    for(int i=0; i<n;i+=2){
    if(arr[i]<n){
        swap(arr[i],arr[i+1]);
    }

    }       
}


int main(){
    
   int  odd[]={1,2,3,4,5,6,7} ;
// SIZE OF ARRAY IS ODD ;
   altArr(odd,7);
   printArr(odd,7);
   cout<<endl;

   // IF SIZE OF ARRAY IS EVEN;
   int even []={2,4,6,8};
   altArr(even,4);
   printArr(even,4);
}