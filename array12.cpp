// Q.  find out unique number in array that mean their pair is not available ??

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,1,3,2,4,1};
    int size=7;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                arr[i] = arr[j] = -1;
            }
        }
    }
     
    for(int i=0; i<size;i++){
        if(arr[i]>0){
        cout<<arr[i];          // 4 is output because this is not pair. 
        }                      // 4 is unique number 
    }

    return 0;
}