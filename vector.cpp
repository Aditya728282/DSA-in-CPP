#include<iostream>
#include<vector>
using namespace std;
 int main(){

 vector<int> v;


 v.push_back(0);
 cout<<"size ="<<v.size()<<endl;
 cout<<"capacity = "<<v.capacity()<<endl;

  v.push_back(1);
 cout<<"size ="<<v.size()<<endl;
 cout<<"capacity = "<<v.capacity()<<endl;
 
 v.push_back(2);
 cout<<"size ="<<v.size()<<endl;
 cout<<"capacity = "<<v.capacity()<<endl;

v.push_back(3);
 cout<<"size ="<<v.size()<<endl;
 cout<<"capacity = "<<v.capacity()<<endl;

 v.push_back(4);
 cout<<"size ="<<v.size()<<endl;
 cout<<"capacity = "<<v.capacity()<<endl;
 //v.insert(begin(1),7);
 
 v.resize(9);
 cout<<"size : "<<v.size()<<endl;
 cout<<"capacity : "<<v.capacity();
 

}
