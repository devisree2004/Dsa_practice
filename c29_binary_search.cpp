#include<iostream>
using namespace std;
int main()
{
    int n;
    printf("enter no.of the elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        printf("enter:");
        scanf("%d",&a[i]);
    }
    int s,c=0;
    printf("enter the element to be searched:");
    scanf("%d",&s);
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(a[j]>a[k])
            {
                int temp;
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }
    int low=0,high=n;
    int mid=(low+high)/2;
    while(low<high)
    {
        if(a[mid]==s)
        {
           printf("element found!!");
           c++;
           break;
        }
        else if(a[mid]<s)
        {
            low=mid+1;
        }
        else
            high=mid-1;
    }
    if(c==0)
    {
        printf("element not found!!");
    }
    return 0;

}