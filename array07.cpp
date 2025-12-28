// linear search : 
#include<iostream>
using namespace std;
int main (){
    int arr[]={2,3,5,11,15,8};
    int key;
    int ans=0;
    cout<<"Enter key : ";
    cin>>key;
    for( int i=0; i<6; i++){
        if(key==arr[i]){
            ans = arr[i]; 
       }
       

    }
    cout<<"Yes key Is Present "<<ans<<endl;


 return 0;
}