// check the given number is in array present or not ? 


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"size of array : ";
    cin>>n;

vector<int>v(n);

cout<<" Enter array element : ";

for(int i=0; i<n; i++){
 cin>>v[i];
}

const int N= 1e5+ 10;
vector<int> freq(N,0);
for (int i=0; i<n; i++){
    freq[v[i]]++;
} 


int q;
cout<<"Enter Query : ";  //  how much time to work 
cin>> q;
while(q--){
    int queryelement ;
    cin>>queryelement;
    cout<<"Yes "<<freq[queryelement]<<endl;
}
return 0;

}