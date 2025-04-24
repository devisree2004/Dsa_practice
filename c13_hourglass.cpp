// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
    
    int i,j;
    for(i=0;i<n;i++)
    {
       for(j=0;j<2*i;j++)
       {
           cout<<" ";
       }
       for(j=(2*n)-(2*i)-1;j>0;j--)
       {
           cout<<"* ";
       }
       
       cout<<endl;
    }
    for(i=n-2;i>=0;i--)
    {
     for(j=0;j<2*i;j++)
       {
           cout<<" ";
       }
       for(j=0;j< 2*(n-i)-1;j++)
       {
           cout<<"* ";
       }
       
       cout<<endl;   
    }
        
       
       
    return 0;
}