#include<iostream>
using namespace std;
bool Ispossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int sumpage=0;
    for(int i=0; i<n; i++){
        if(sumpage+arr[i]<=mid){
            sumpage+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i]> mid ){
                return false;
            }
        sumpage=0;
        sumpage+=arr[i];
        }
    }
    return true;
    
}
int AlloccationBook(int arr[],int n, int m){
 int s=0;
 int sum=0;
 int ans=-1;
 for(int i=0; i<n; i++){
    sum+=arr[i];
     }
 int e=sum;
 int mid=s+(e-s)/2;
 while(s<e){
    if(Ispossible(arr,n,m,mid)){
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
cout<<AlloccationBook(arr,4,2)<<endl;
}