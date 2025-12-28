/*#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello";
    return 0;
}*/
#include<iostream>
using namespace std;
void merge(int a[],int b[],int c[],int,int,int);
int main()
{
    int a[10],b[10],c[10],i,n1,n2,n3;
    cout<<"Enter the size of array A:"<<endl;
    cin>>n1;
    cout<<"Enter the elemet in array A:"<<endl;
    for(i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of array B:"<<endl;
    cin>>n2;
    cout<<"Enter the Element in array B:"<<endl;
    for(i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    merge(a,b,c,n1,n2,n3);
    return 0;
}
void merge(int a[],int b[],int c[],int n1,int n2,int n3)
{
    int i,j;
    n3=n1+n2;
    for(i=0; i<n1; i++)
    {
        c[i]=a[i];
    }
    for(i=0,j=n1;j<n3 && i<n2;i++,j++)
    {
        c[j]=b[i];
    }
    cout<<"New merge array:"<<endl;
    for(i=0;i<n3;i++)
    {
        cout<<c[i]<<endl;
    }
}