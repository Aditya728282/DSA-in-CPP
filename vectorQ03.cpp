//  Checked array sorted or not  ???
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<" Enter 5 element : ";
    for(int i=0; i<5; i++){
        cin>>v[i];

    }
    bool ans=true;
    for(int i=0; i<5; i++){
        if(v[i] <= v[i-1]){
            ans=false;
        }                        // if array is sorted ans = 1;
        else{
            ans=true;           // if array is not sorted ans = 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}