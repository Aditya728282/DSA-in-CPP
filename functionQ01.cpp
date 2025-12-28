// SQUARE OF ANY GIVEN FUNCTION : using function


#include <iostream>
using namespace std;
int square (int a){
    return a*a;
}
int main(){
    
    int n;
    cin>>n;
 for(int i=1; i<=n; i++){
    cout<<square(i)<<endl;

 }
return 0;
}