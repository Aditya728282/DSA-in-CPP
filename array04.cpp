#include<iostream>
using namespace std;
int main(){
    int array[]={1,3,4,7,5};
    int sum=0;
    for(int i=0; i<5; i++){
        sum=sum+array[i];
    }
    cout<<sum;
    return 0;

}