

// Example 19: Using Recurion Merge Sort 

// Very IMportant Question 

#include<iostream>
using namespace std;
void Merge(int *arr, int s, int end){
    int mid = ( s + end ) / 2 ;

    int len1 = mid- s+1;

    int len2 = end - mid ;

    int * left = new int [len1];
    int * right = new int [len2];

    // copy value
    int k=s;
    for(int i=0; i<len1; i++){
        left[i]=arr[k++];
    }

      k = mid+1;
    for(int i=0; i<len2; i++){
        right[i]=arr[k++];
    }   

    // merge logic 
    int leftIndex=0;
    int rightIndex=0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
          arr[ mainArrayIndex++ ]= left[leftIndex ++];
        }

        else{
           arr[ mainArrayIndex++ ]= right[rightIndex ++];  
        }
    }
// copy logic for Left part
    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }

//  copy logic for right part
while(rightIndex < len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }

}

void MergeSort(int *arr, int s, int end){
    // base case 

    // s==e ---- single Element
    // s>e ----  Invalid
    if(s>=end){
        return ;
    }


    int mid = (s+end) / 2 ;

    // left part ko sort kar do recursion bhaiya
    MergeSort(arr, s , mid);

    // Right part ko sort kar do recursion bhaiya
    MergeSort(arr, mid+1, end);

    Merge(arr, s, end);
}
int main(){
    int arr[]={4, 5, 13, 2, 12};
    int n=5;
    int s=0; 
    int end=n-1;
    MergeSort(arr, s, end);


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}