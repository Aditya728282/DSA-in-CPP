// simple star patter :- ********
//                       ********
//                       ********

#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter size of Row : ";
    cin>>n;
    cout<<"Enter size of Column : ";
    cin>>m;
    for(int i=0;i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"*";
        }
     cout<<endl; 
   }

 return 0;
}