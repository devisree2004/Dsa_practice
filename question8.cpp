
#include<iostream>
using namespace std;
int main()
{
    int arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    int th_min=9,te_min=9,h_max=0,on_max=0;
    int th,h,t,o;
    for( int n :arr)
    {
        th=n/1000;
        h=(n/100)%10;
        t=(n/10)%10;
        o=n%10;
        th_min=min(th_min,th);
        te_min=min(te_min,t);
        h_max=max(h_max,h);
        on_max=max(on_max,o);
    }
    int result=th_min*1000+h_max*100+te_min*10+on_max;
    cout<<result;
    return 0;
}