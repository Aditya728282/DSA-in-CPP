#include <iostream>
using namespace std;
int main(){
    int ans=0;
    int unique[5]={1,2,3,1,3};
    for(int i=0; i<5; i++){
        ans=ans^unique[i];
cout<<unique[i];
    } cout<<ans;
}