#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> arr{0,1,1,0,1,0,1,0,0};
    
    int start=0;
    int end = arr.size()-1;
    while(start <= end){
        if(arr[start]==0){
            start++;
        }
        else if(arr[end]==1){
           end--;
        }
        else{
            swap(arr[start] , arr[end]);
            start++;
            end--;
        }
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}