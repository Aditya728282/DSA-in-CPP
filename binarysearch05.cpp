#include<iostream>
using namespace std;
bool Ispossible(int arr[],int n, int m, int mid){
     int StudenCount=1;                   // for first student 
     int Sumpage=0;
     for(int i=0; i<n; i++){
        if(Sumpage + arr[i] <= mid){
         Sumpage+=arr[i];
        } 
        else{                          // for second student 
         StudenCount++;
         if(StudenCount > m || arr[i] > mid ){
            return false;
         }
         Sumpage=arr[i];
        }
     }
     return true;
}
int Isallocatebook(int arr[], int n, int m){
    int s=0; 
    int sum=0;
     for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int ans=-1;
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(Ispossible(arr, n, m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
       mid=s+(e-s)/2; 
    }
    return ans;
}
int main(){
    int arr[4]={10,20,30,40};
cout<<"This Number is minimum of these of all: "<<Isallocatebook(arr,4,2)<<endl;
return 0;

}