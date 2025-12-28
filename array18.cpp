
// Q. Begining number is even or last number odd 

#include<iostream>
#include<vector>
using namespace std;
void sortByParity(vector<int> &arr){
    int left_ptr=0;
    int right_ptr=arr.size()-1;

    while(left_ptr<right_ptr){
        if(arr[left_ptr]%2==1 && arr[right_ptr]%2==0){
          swap(arr[left_ptr], arr[right_ptr]);
          left_ptr++;
          right_ptr--;

        }
        if(arr[left_ptr]%2==0){
             left_ptr++;
        } 
        if(arr[right_ptr]%2==1){
             right_ptr++;
        }   

    } 
    return;
}
 void display(vector<int>arr){
        for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    }

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter size : ";
    cin>>n;
       int element;
    for(int i=0; i<n; i++){
        int element;
       
        arr.push_back(element);
    }
sortByParity(arr);
   display(arr);

return 0;

}