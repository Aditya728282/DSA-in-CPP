// Sort the these element [1,1,0,0,1,0,1,0] 

#include<iostream>
#include<vector>
using namespace std;
void sortElement(vector<int> &v){

   int zerocount=0;
   for(int i=0; i<v.size(); i++){
          if(v[i]==0){
            zerocount ++;
          }
   }
   
   for(int i=0; i<v.size(); i++){
    if(i<zerocount){
        v[i]=0;
    }
    else{
        v[i]=1;
    }
   }

}

int main(){

vector<int>v;
int n;
cout<<"ENTER SIZE OF ARRAY : ";
cin>>n;
cout<<"ENTER ELMENT OF " <<n <<" SIZE : ";
for(int i=0; i<n; i++){
 int ele; cin>>ele;
 v.push_back(ele);
}

sortElement(v);   // funtion call
for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
}

cout<<endl;
return 0;
}