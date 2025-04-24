#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no.of rows:";
    cin>>n;
    int i,j,c=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
          cout<<++c<<" ";
        }
        cout<<endl;
    }
    return 0;
}