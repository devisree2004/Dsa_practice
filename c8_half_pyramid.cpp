#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no.of rows";
    cin>>n;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=n-i-1;j>0;j--)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
         cout<<"*";   
        }
        cout<<endl;
    }
    return 0;
}