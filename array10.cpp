// Q. find the total number of pairs in array whose sum is equall 
//        to given target value x=7.

#include<iostream>
using namespace std;
int main (){
    int array[]={3,4,6,7,1};
    int size=5;
    int targetsum=7;
    int pairs=0;
    for(int i=0; i<size;i++){
        for(int j=i+1; j<size; j++){
            if(array[i] + array[j] == targetsum){
                pairs++;
                cout<<array[i]<<" "<<array[j]<<endl;
            }
        }
    }
    
    cout<<"Pairs iS : "<<pairs<<endl;
}