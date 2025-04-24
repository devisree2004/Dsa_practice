#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no.of elements:";
    cin>>n;
    int a[n];
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        cout<<"enter:";
        cin>>a[i]  ; 
    }
    for(int j=0;j<n;j++)
    {
        int min=j;
        for(int k=j+1;k<n;k++)
        {
           if(a[min]>a[k])
           {
            int temp;
            temp=a[k];
            a[k]=a[min];
            a[min]=temp;
           } 

        }
    }
    cout<<"the sorted elements are:"<<"\n";
    for(int l=0;l<n;l++)
    {
        cout<<a[l]<<" ";
    }
    return 0;
}