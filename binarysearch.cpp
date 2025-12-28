#include<iostream>
using namespace std;

int binarysearch(int arr[], int size , int key){
    int start =0; 
    int end=size-1;
    int mid=start + (end - start)/2;
    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }                               // USE THIS FORMULA FOR NOT ERROR
                                           // MID = S + (E-S)/2
        else{
            end=mid-1;
        }
    mid=(start+end)/2;
    }
    return -1;
}

int main(){
int even[]={2,4,5,6,8,6};
int odd[]={3,5,7,8,9};

// for even element 
int Evenindex=binarysearch(even, 6, 8);
cout<<"index of key is: "<<Evenindex <<endl;

// for odd element 
int Oddindex=binarysearch(odd, 5, 7);
cout<<"index of key is: "<<Oddindex <<endl;

}