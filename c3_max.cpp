#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"max is "<<a<<endl;
        }
        else
        {
            cout<<"max is "<<c<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"max is "<<b<<endl;
        }
        else
        {
            cout<<"max is "<<c<<endl;
        }
    }
    return 0;
}