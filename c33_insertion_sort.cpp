#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of elements:";
    cin>>n;
    int a[n];
    cout<<"enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"enter:";
        cin>>a[i];
    }
    int key,i,j;
    for( i=1;i<n;i++)
    {
        
        key=a[i];
        for( j=i-1;j>=0;j--)
        {
          if(key<a[j])
          {
            a[j+1]=a[j];
          }
          else
          {
            break;
          }
        }
        if(j!=i-1)
        {
          a[j+1]=key;
        }
    }
    cout<<"the sorted array is:\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}