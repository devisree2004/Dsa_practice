#include<iostream>
using namespace std;
class Interest
{
    int si,p,t,r;
    public:
    Interest(int a,int b,int c)
    {
        cout<<"Constructor is called\n";
        p=a;
        t=b;
        r=c;
    }
    int simple(Interest & a)
    {
        si=(p*t*r)/100;
        printf("the simple interest is %d\n",si);
    }
    ~Interest()
    {
        cout<<"destructor is called\n";
    }

};
int main()
{
    Interest d(10000,5,2);
    d.simple(d);
    Interest e(20000,4,6);
    e.simple(e);
    Interest f(23456,7,8);
    f.simple(f);
    return 0;

}