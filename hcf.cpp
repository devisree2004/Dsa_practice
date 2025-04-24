#include<iostream>
using namespace std;
class Hcf
{
    public:
    int a,b;
    int t,u;
    int rem;
    Hcf(int x,int y)
    {
       a=x;
       b=y;
    }
    
    void swap(int &e,int &f)
    {
        int t;
        t=e;
        e=f;
        f=t;
    }
    int hcf()
    {
        if(a<b)
        {
            swap(a,b);
            hcf();
        }
        else
        {
            rem=a%b;
            if(rem==0)
            {
                return b;
            }
            else
            {
              while(rem!=0)
              {
               t=b;
               u=rem;
               rem=t%u;
               b=u; 
              }
              return u;
            }
        }
    }

};
int main()
{
    
    int n,m;
    cout<<"enter a value: ";
    cin>>n;
    cout<<"enter a value:";
    cin>>m;
    Hcf obj(n,m);
    int res=obj.hcf();
    cout<<"the hcf of "<<n<<"and"<<m<<"is "<<res<<endl;
    return 0;
}
