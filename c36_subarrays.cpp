#include<iostream>
using namespace std;
int main()
{
    int n,c=0,sum,tot=0;
    cout<<"enter the no.of elements:";
    cin>>n;
    int a[n];
    cout<<"enter the array elements:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"enter:";
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=0;
            c++;
            for(int k=i;k<=j;k++)
            {
                cout<<a[k]<<"\t";
                sum=sum+a[k];
            }
            
            tot=tot+sum;
            cout<<"\n";
        }
    }
    cout<<"the no. of subarrays is:"<<c<<"\n";
    cout<<"total is:"<<tot<<"\n";
    cout<<"thank you!!";
    return 0;
}