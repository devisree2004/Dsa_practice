#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no.of rows:";
    cin>>n;
    int i,j,k;
    for(i=0;i<n;i++)
    {
      for(j=0;j<i;j++)
      {
        cout<<"* ";
      }
      for (j=2*(n-1-i);j>0;j--)
      {
          cout<<"  ";
      }
      for(k=0;k<i;k++)
      {
        cout<<"* ";
      }
      cout<<endl;
    }
    return 0;
}