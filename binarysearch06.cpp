#include<iostream>
using namespace std;
bool Ispossible(int arr[], int n, int painter, int mid){
    int Firstpainter=1;
    int sumtable=0;
    for(int i=0; i<n; i++){
        if(sumtable + arr[i] <= mid){
         sumtable+=arr[i];
    }
        else{                          // for second student 
          Firstpainter++;
         if(Firstpainter > painter || arr[i] > mid ){
            return false;
         }
         sumtable= 0;
         sumtable+=arr[i];
        }
     }
     return true;
}


int painterPartition(int arr[], int size, int painter){
int s=0; 
int sum=0;
for(int i=0; i<size; i++){
 sum+=arr[i];
}
int e=sum;
int mid=s+(e-s)/2;
int ans=-1;
while(s<e){
    if(Ispossible(arr,size,painter,mid)){  
      ans=mid;
      e=mid-1;                   // if posible   (end=mid-1)
    }
    else{
        s=mid+1;                // if not possible (start=mid+1)
    }
    mid=s+(e-s)/2;
}
return ans;

}
int main(){
 int arr[4]={5,5,5,5};
cout<<painterPartition(arr,4,2)<<endl;
return 0;
}