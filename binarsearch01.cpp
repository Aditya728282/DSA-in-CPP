//  Q. In sorted array find the last occurence and 
//         first occurence of any given number .

#include<iostream>
using namespace std;

// this is for first occurrence
int firstOcc(int arr[], int size, int key ){
    int ans=-1;
    int start=0;
    int end =size-1;
    int mid =start + (end-start)/2;
 while(start <= end){
    if(arr[mid]==key){
        ans=mid ;
        end = mid-1;

    }
     else if(key < arr[mid] ){
         end = mid-1;

    }
    else {
         start = mid+1;
    }
    mid = start + (end - start)/2;
  }
   return ans;
}


// this is for last occurrence
int lastOcc(int arr[], int size, int key ){
    int ans=-1;
    int start=0;
    int end =size-1;
    int mid =start + (end - start)/2;
 while(start <= end){
    if(arr[mid]==key){
        ans=mid ;
        start = mid+1;

    }
    if(key < arr[mid] ){
         end = mid-1;

    }
    else {
         start = mid+1;
    }
    mid = start + (end - start)/2;
  }
   return ans;
}

int main(){
 int even[11]={1,2,3,3,3,3,3,3,3,3,5};
 int indexoffirst=firstOcc(even, 11,3 );
 int indexoflast=lastOcc(even, 11, 3 );

 cout<<"First Occurence is : "<<indexoffirst<<endl; // first occurence 
 cout<<"Last Occcurrence is: "<<indexoflast<<endl;  // last occurence

 int totalOccurnce=indexoflast-indexoffirst+1;      // total occurence
 cout<<"total number of occurence : "<<totalOccurnce;
return 0;
}