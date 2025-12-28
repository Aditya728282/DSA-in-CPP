//  looping in vector 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<" Enter elment of 5 time : ";
    for(int i=0; i<5; i++){   // takin input by user
        int element;
        cin>>element;
        v.push_back (element );
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";    // output 
    }
     cout<<endl;

     // If we want to insert a new value 
     v.insert(v.begin()+2,7);

     // If we want to erase 2and last value 
     v.erase(v.end()-2);

// using while loop:-
  int i=0;
  cout<<"using while loop : " <<endl;
  while(i<v.size()){
    cout<<v[i] <<" ";
    i++;
  }

    cout<<endl;
    return 0;
}