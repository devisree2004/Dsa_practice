#include<iostream>
using namespace std;
int minimum(int a,int b)
{
    int min;
    if(a<b)
    min=a;
    else
    min=b;
    return min;
}
int main()
{
    //input
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
    int fib=0,fib2=0,fib1=1,offset=-1;
    //sorting
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
    fib=fib1+fib2;
    while(fib<n)
    {
      fib2=fib1;
      fib1=fib;
      fib=fib1+fib2;
    }
    while(fib>1)
    {
        int k=minimum(offset+fib2,n-1);
        if(a[k]==s)
        {
            printf("element found!!");
            c++;
            break;
        }
        else if(a[k]<s)
        {
            fib=fib1;
            fib1=fib2;
            fib2=fib-fib1;
            offset=k;

        }
        else
        {
            fib=fib2;
            fib1=fib1-fib;
            fib2=fib-fib1;

        }
    }
    return 0;


}