#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;

}