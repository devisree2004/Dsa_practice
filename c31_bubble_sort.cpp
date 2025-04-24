#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of elements:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter:";
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"the sorted array through bubble sort is :\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}