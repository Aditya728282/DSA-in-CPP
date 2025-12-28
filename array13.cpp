// Q. find out second large elment in given array ??



// this question is ver logical question.


#include <iostream>
using namespace std;


int maxIndex=-1;
int LargeIndex(int arr[], int size){
    int max = INT32_MIN;
    for(int i=0; i<size; i++){
        if(max < arr[i]){
            max=arr[i];
            maxIndex=i;

        }
    }
    return maxIndex;
}

int main(){

    int arr[]={2,3,5,7,6,1};
    int n=6;

 // First large Element In Array
    int FirstLarge=LargeIndex(arr, n);
    cout<<"First Large Number: "<<arr[FirstLarge]<<endl;

 // secind large Element In Array
     arr[FirstLarge]=-1;
     int secondlarge=LargeIndex(arr, n);
     cout<<"Second Large Number: "<<arr[secondlarge]<<endl;

 // Third large Element In Array
     arr[secondlarge]=-1;
     int thirdlarge= LargeIndex(arr,n);
     cout<<"Third Large Number: "<<arr[thirdlarge];

    return 0;
}