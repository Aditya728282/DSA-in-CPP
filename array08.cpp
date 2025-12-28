#include <iostream>
using namespace std;

int main(){
int arr[]={1,2,3,5,9,11,18};
int key;
cout<<" enter key : ";
cin>>key;
 int ans=-1;
for(int i=0; i<7; i++){
    if (key==arr[i]){
    ans=i;
 }
}
cout<<ans<<endl;
return 0;
}