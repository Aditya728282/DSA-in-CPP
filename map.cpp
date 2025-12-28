//  MAP:
/* 1.  It stores key-value pairs.
   2.  Keys are unique within the map.
   3.  The keys are sorted based on a strict weak ordering criterion.
   4.  Accessing elements by key is fast, typically in logarithmic time.*/ 

#include<iostream>
#include<map>

using namespace std;
int main(){
  map<int,string> myMap;  // initilised map variables
// Inserting elements into the map
    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[5] = "Orange";
    myMap[4] = "Grapes";
    // INSERTING VALUE 
    myMap.insert({7,"Ram"});
     cout<<"AT second Index : "<<myMap[7]<<endl;

    for(auto i: myMap){
        cout<<i.first<<" "<<i.second<<endl;
    }
   // INSERTING VALUE 
   myMap.insert({5,"Ram"});

   // Erase the Ram 

   cout<<"After Erase the Value : "<<endl;
   myMap.erase(7);

   // After erase the Values : 
    for(auto i: myMap){
    cout<<i.first<<" "<<i.second<<endl;
       }
       return 0;

}