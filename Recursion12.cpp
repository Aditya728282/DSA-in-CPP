#include<iostream>
using namespace std;
bool checksorted(int arr[], int n, int i){
     //base case
     if(i==n-1){
        return true;
     }

     // 1 case solve kar do 
     if(arr[i] < arr[i+1]){
        return true;
     }

     // Baki recursion Sambhall lega 
     checksorted(arr, n, i+1);
}

int main(){
    int arr[]={10, 20,30,40,50};
    int n= 5;
    int i=0;
    int ans= checksorted(arr, n, i);
    if(ans){
        cout<<"Given Array is sorted "<<endl;
    }
    else{
        cout<<"Given array is not Sorted "<<endl;
    }

 return 0;
}