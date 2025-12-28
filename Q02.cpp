// In given Array find the on;ly Positive number MIddle Number ; And Remove All negative NUmber ?

#include<iostream>
#include<vector>
using namespace std;
int count=0;
int Solve(vector<int> v , int n){

    // New Vector For Positive value store 
    vector<int>positives;


   // It New Vector Contains Only Positive Number
    for(int i=0; i<n; i++){
        if(v[i]>0){
            positives.push_back(v[i]);
        }
    }
  
  // find Mid Number;
  int mid = (positives.size()-1) / 2;

  return positives[mid];

  // If There is No Any Positives Number in Array
  if(positives.empty()){
    return -1;
  }



}

int main(){
   vector<int> v{1, -2 , -3, 4, 5};
  int Positive_Mid_Ele = Solve(v, 5);

  if(Positive_Mid_Ele != 0){
    cout<< "Middle Positive Number is : "<<Positive_Mid_Ele<<endl;
  }
  else{
    cout<<"There is Not Any POsitive Number Is Found: ";
  }
}
