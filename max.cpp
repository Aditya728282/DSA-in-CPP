#include<iostream>
using namespace std;
void maximum(int a[],int);
int main()
{
int a[10],i,n;
cout<<"Enter the size of array\n";
cin>>n;
cout<<"Enter the element in array A:\n";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
 maximum(a,n);
return 0;
}
 void maximum (int a[],int n)
{
    int i;
    //int largest =a[0];
    for(i=0;i<n;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
    cout<<a[0];
}
