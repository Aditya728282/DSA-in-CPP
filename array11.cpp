//  Q. count the number of triplet whose sum is equal to given any number x .

#include <iostream>
using namespace std;
int main(){
    int arr[]={3,1,2,4,0,6};
   int size=6;
   int targetsum=5;
   int triplets=0;
    for(int i=0; i<size; i++){
      for(int j=i+1; j<size; j++){
        for(int k=j+1; k<size; k++){
            if(arr[i] + arr[j] + arr[k]==targetsum){
                triplets++;
            }
        }
    }
  }                              // there are two triplet present in this question
                                // (i.)  3 + 2 + 0 = 5
                                // (ii.) 4 + 1 + 0 = 5
   cout<<triplets<<endl;
  return 0;
  }
