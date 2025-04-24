#include<iostream>
using namespace std;
int Partition(int a[],int lb ,int ub)
{
  int pivot=a[lb];
  int start=lb;
  int end=ub;
  while(start<end)
  {
    while(pivot>a[start])
    {
        start++;
    }
    while(pivot<a[end])
    {
        end--;
    }
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;

  }
  
  return end;

}
void  quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
    int loc;
    loc=Partition(a,lb,ub);
    quicksort(a,lb,loc-1);
    quicksort(a,loc+1,ub);
    }


}
int main()
{
    int n;
    cout<<"enter the no.of elements:";
    cin>>n;
    int a[n];
    cout<<"enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"enter:";
        cin>>a[i];
    }
    
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}

