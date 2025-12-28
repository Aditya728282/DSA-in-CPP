#include<iostream>
#include<vector>
using namespace std;
int main(){
   
    int arr[]={1,2,3,4,5,6};
    bool sortedflag=false;
    for (int i=0; i<6;i++){
        if(arr[i]>arr[i-1]){
     sortedflag=true;
        }
    } cout<<sortedflag<<endl;
  if(sortedflag=1)
  { cout<<"Given array is sorted : ";
  }
   else
   cout<<"Given array is not sort :  ";

}