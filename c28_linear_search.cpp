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
        if(a[j]==s)
        {
        printf("element found!!");
        c++;
        break;
        }
    }
    if(c==0)
    {
      printf("element not found!!");
    }
    return 0;
}