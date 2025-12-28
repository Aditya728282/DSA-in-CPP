#include<iostream>
#include<vector>
using namespace std;

int uniqueArr(vector<int>arr){
    int ans=0;
    for(int i=0; i<arr.size(); i++){
        ans = ans^ arr[i];
       
    }
     return ans;
}

int main(){
vector <int> arr;
int n;
cout<<"enter the size of Array "<<endl;
cin>>n;

for(int i=0; i<n; i++){
    int ele; 
    cin>>ele;
    arr.push_back(ele);
    
}
 int UniqueELement= uniqueArr(arr);
 cout<<UniqueELement<<endl;

}