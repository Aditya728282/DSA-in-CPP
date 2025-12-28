#include<iostream>
using namespace std;
int BinarySearch(int arr[] , int size, int start ,int end , int& key){
    //base case
    if(start>end){
      return -1;
    }
    int mid = (start + end) / 2;
    if(arr[mid] == key){
       return mid;
    }
  // 1 Caase solve kardo
  if(key < arr[mid]){ 
    return(arr , size, start , mid-1, key);
  }
  else{
   return(arr , size, mid+1, end, key);
  }
}


int main(){
    int key = 7;
int n=8;
int start = 0;
int end = n-1;
int arr[]= {1 ,2 ,3, 4,5,6,7,8};
 int ans= BinarySearch(arr, n,  start , end ,  key);
 if(ans){
    cout<<"Key is Presnt at Index is : "<<ans<<endl;
 }
 else{
    cout<<"Not Key Is present : "<<endl;
 }
}