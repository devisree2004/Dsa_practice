#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,sum,c=0;
    cout<<"enter the no.of elements:";
    cin>>n;
    int a[n];
    cout<<"enter elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"enter:";
        cin>>a[i];
    }
    int s;
    cout<<"enter the sum required:";
    cin>>s;
    for(i=0;i<n;i++)
    {
        
        
        for(j=i;j<n;j++)
        {
            
            for(k=i;k<=j;k++)
            {
              sum=sum+a[k];
            }
            if(sum==s)
            {
                cout<<"the required subarray is:"<<i<<" "<<j;
                
                c++;
                break;
            }
            else
            {
               sum=0;
            }
        }
    }
    if(c==0)
    {
        cout<<"required subarray not found!!";
    }
    return 0;
}