
//Given this array[1,1,0,0,1,0,1,0] sort these element . 

//    ans:- [0,0,0,0,1,1,1,1]

#include<iostream>
#include<vector>
using namespace std;
int sortzeroone(vector<int> &v){
   int left_ptr=0;
  int right_ptr=v.size()-1;
while(left_ptr<right_ptr){
    if(v[left_ptr]==1 && v[right_ptr]==0){
        v[left_ptr]=0;
        v[right_ptr]=1;
        left_ptr++;
        right_ptr--;
    }

    if(v[left_ptr] < v[right_ptr]){
        left_ptr++;
    }

    if(v[right_ptr] > v[left_ptr]){
        right_ptr--;
    }
  }
}

int main(){
vector<int>v;
int n;
cout<<"ENTER SIZE OF ARRAY : ";
cin>>n;
cout<<"ENTER ELEMENT OF " <<n <<" SIZE : ";
for(int i=0; i<n; i++){
 int ele; cin>>ele;
 v.push_back(ele);
}

sortzeroone(v);
for(int i=0; i<n; i++){
   cout<<v[i]<<" ";
}
cout<<endl;
return 0 ;
}

