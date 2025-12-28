// this sorting is 3rd sortin technique .


#include<iostream>
using namespace std;

int InsertionSort(int arr[], int n){
for(int i=0; i<n; i++){
    int temp = arr[i];
        int j=i-1;      // this for global variable
    for(  ; j>=0; j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];  // shift next index
        }

        else{
            break;
        }
    }
    arr[j+1]=temp;

}
}
int main (){
    // for taking input array by user :
    int n;
    cout<<"Enter the size of array : ";
     cin>>n;
    int arr[n];
    cout<<"Enter the element of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
      // function calling and output 
    InsertionSort( arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }
     return 0;
}