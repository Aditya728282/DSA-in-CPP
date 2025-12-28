/*#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,k;
    cout<<"Enter the size of array A:";
    cin>>n;
    cout<<"Enter the element of array A:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the size of array B:";
    cin>>n;
    cout<<"Enter the element in array B:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
        for(k=0;k<n;k++)
        {
            c[i][j]+=a[i][k]*b[k][j];
        }
        }
    }
    cout<<"Multiplication array:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<c[i][j];
        }
        cout<<"\n";
    }
    return 0;
}*/
//Sorting of 2D array
#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,k,temp;
    cout<<"Enter the size of array A:";
    cin>>n;
    cout<<"Enter the element of array A:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the size of array B:";
    cin>>n;
    cout<<"Enter the element in array B:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
        for(k=0;k<n;k++)
        {
            c[i][j]+=a[i][k]*b[k][j];
        }
        }
    }
    cout<<"Multiplication array:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(c[i][j=i]>=c[i][j+1])
            if(c[i][j=i]>=c[i][j+1])
            {
                temp=c[i][j=1];
                c[i][j=1]=c[i][j+1];
                c[i][j=i]=temp;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
              cout<<c[i][j]<<"";
            }
        }
        cout<<"\n";
    }
    return 0;
}

