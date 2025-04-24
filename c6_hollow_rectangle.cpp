#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cout<<"enter no.of rows:";
    cin>>m;
    cout<<"enter no.of columns:";
    cin>>n;
    for(i=0;i<m;i++)
    {
        if(i==0||i==m-1)
        {
            for(j=0;j<n;j++)
            {
                cout<<"* ";
            }
           cout<<endl;
        }
        else 
        {
            for(j=0;j<n;j++)
            {
                if(j==0||j==n-1)
                {
                    cout<<"* ";
                }
                else 
                {
                    cout<<"  ";
                }
            }
           cout<<endl; 
        }
        
    }
    return 0;

}