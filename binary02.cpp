#include<iostream> 
using namespace std;
int Inmountainarray(int arr[],int size, int key){
    int s=0;
    int e=size-1;
    int mid= s+ (e-s)/2;
     while(s<e){
        if(arr[mid] < arr[mid+1]){
        s = mid+1;
        }
        else{
          e = mid;
        }
        mid = s+ (e-s)/2;
     }
    return -1;
}
int main(){
  int arr[5]={2,3,5,1};
  Inmountainarray(arr,4,5);
  cout<<"the mountain number of index number is: "<<Inmountainarray<<endl;
}