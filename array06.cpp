
// In given array which number is maximum

// find max number in array : 

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,3,11};
    int max = arr[0];
    for(int i=0; i<5; i++){
        if(max < arr[i]){
           max = arr[i]; 
        }
    }
    cout<< max; // we get max value
}