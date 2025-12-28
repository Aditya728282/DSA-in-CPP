#include<iostream>
using namespace std;
int searchindex(int arr[],int size,int index,int target){
    //Base case
    if(index>size){
        return -1;
    }
    if(arr[index]==target){
        return index;
    } 
     searchindex(arr,size,index+1,target);
}
int main(){
    int arr[]={2,3,4,5,6,7};
    int size=6;
    int index=0;
    int target=6;
    cout<<searchindex(arr,size,index,target)<<endl;
return 0;
}