//Print the first multilpe of 5 which is also a multiple of 7.

#include<iostream>
using namespace std;
int main(){
    int n=5;
    while(true){
        if(n%7==0){
            cout<<n<<endl;
            break;
        }
        n=n+5;
    }

    for(int i=5;;i++){
        if (i%7==0){
            cout<<i<<endl;
            break;
        }
     }




    return 0;
}