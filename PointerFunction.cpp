#include<iostream>
using namespace std;

//funtion Pointer
void print(int *p){
    cout<<"Address Is: "<<p<<endl;
    cout<<"Element Is: "<<*p<<endl;

}
// Update By One Increment of Address
void updatePrint(int *p){
    p=p+1;
     cout<<"Updated Address is: "<<p<<endl;

}
// sum Array 
int getsum(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
      sum=sum+arr[i];
    }
    return sum;
}



int main(){
    int nums=5;
    int *ptr=&nums;
    print(ptr);

    updatePrint(ptr);

    int arr[]={1,2,3,4,5,7};
    cout<<"Sum of Array is: "<<getsum(arr+2,4);

    return 0;

}
