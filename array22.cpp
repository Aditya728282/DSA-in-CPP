// Q.  Given an array of integer of size n . Answer q query where we need
//    print the sum of value in a given range of indices
//       from L to R.   

#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n ;
    cout<<"Enter size of Array : ";
    cin>>n;
  vector<int> v(n+1, 0);
  for(int i=1; i<=n; i++){
         cin>>v[i];
  }
  
  for(int i=1; i<=n; i++){
   v[i]+=v[i-1];

  }
  int q;
  cout<<"How time give query : ";
   cin>>q;

  while(q--){
    cout<<"query no.: "<<q<<" choose the value of l , r : ";
    int l, r;
    cin>>l>>r;
    int ans=0;
    // sum = prefixsum[r] - prefix[l-1] ;
      ans=v[r]-v[l-1];
     cout<<"Ans is : "<<ans<<endl;
  }
  return 0;
}
