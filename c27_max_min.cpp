#include<iostream>
using namespace std;
int main()
{
    int n;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:");
    for (int i=0;i<n;i++)
    {
        printf("enter:");
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(int i=1;i<n;i++)
    {
      if(a[i]>max)
      
        max=a[i];
      else if(a[i]<min)
      min=a[i];
    }
    printf("the maximum number is %d\n",max);
    printf("the minimum number is %d",min);
    return 0;
}