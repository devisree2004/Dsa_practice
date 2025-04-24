#include"bits/stdc++.h"
using namespace std;
class Overloading
{
    public:
    int n,m,res=0,pro;
    Overloading()
    {
       n=10;
       m=20;
    }
    Overloading operator +(Overloading &obj)
    {
        Overloading temp;
        temp.res=temp.m-temp.n;
        return temp;
    }
    void mul(int a,int b)
    {
        pro=a*b;
        cout<<"this is a function overloaded function"<<endl;
        cout<<"the result is:"<<pro<<endl;
    }
    void mul(double a,double b)
    {
        double p1;
        p1=a*b;
        cout<<"this is a function overloaded function"<<endl;
        cout<<"the result is:"<<p1<<endl;
    }

};
int main()
{
 Overloading obj;
 
}