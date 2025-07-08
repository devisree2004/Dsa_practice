
#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int y;
    cin>>y;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int jumps=0;
    for(int i=0;i<n;i++)
    {
        while(arr[i]>0)
        {
            if(arr[i]<=x)
            {
                jumps++;
                arr[i]-=x;
            }
            if(arr[i]>x)
            {
                
                    jumps++;
                    arr[i]-=x-y;
                
            }
        }
    }
    cout<<jumps;
    return 0;

}