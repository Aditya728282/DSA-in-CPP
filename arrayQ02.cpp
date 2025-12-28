// Q. write a code to check whether given number is pair of absolute diff .

#include<iostream>
using namespace std;
int main(){
    int arr[]={5,10,15,20,25};
    int n=5;
    int i=0;
    int j=1;
    int x;
    cout<<"Enter key : ";
    cin>>x;
    bool found =false;
    while(i<n && j<n){
        if(abs(arr[i]-arr[j]) == x){
             found = true;
             break;
        }
        else if(abs(arr[i] - arr[j] ) < x){
            j++;
        }
        else{
            i++;
        }
    }
    if(found == true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}