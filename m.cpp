#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int maxindex=0;
int minindex=0;
int largestIndex(vector<int>arr){
    int max=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(max<arr[i]){
            max=arr[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int smallest(vector<int>brr){
    int min=INT_MAX;
    for(int i=0;i<brr.size();i++){
        if(min>brr[i]){
            min=brr[i];
            minindex=i;
        }
    }
    return minindex;
}
//vector<int> getSecondOrderElements(int n, vector<int> a) 
int main(){
    // Write your code here.
    vector<int>a{2,3,4,5,6};
    int largestofondex=largestIndex(a);
    a[largestofondex]=-1;
    int secondlargestIndex=largestIndex(a);
    cout<<a[secondlargestIndex]<<endl;

    int smallestofindex=smallest(a);
    a[smallestofindex]=0;
    int secondindex=smallest(a);
    cout<<a[secondindex];
    
}
