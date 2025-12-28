// Q.  Find the difference between sum of even element indices and 
//        sum of odd element indices.


#include<iostream>
using namespace std;
int main(){                         // taking size of array
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

int array[n];                        // taking array element 
cout<<" Enter "<<n<<" element : ";
for(int i=0; i<n; i++){
    cin>>array[i];
}


 int sumeven=0;
 int sumodd=0;
 for(int i=0; i<n; i++){
    if(i%2==0){
        
         sumeven=sumeven+array[i];  //sum of even element only
    }
    else{
        
        sumodd=sumodd+array[i];    // sum of odd element only
    }
 }
 
cout<<"Diffrence is : "<<(sumeven-sumodd)<<endl;     // sum = odd - even ;
return 0;
}