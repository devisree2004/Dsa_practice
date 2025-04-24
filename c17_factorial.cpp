#include<iostream>
using namespace std;
int factorial(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }

}
int main()
{
    int n,fact=1;
    cout<<"enter the number:";
    cin>>n;
    
    fact=n*factorial(n-1);
    cout<<"the factorial is "<<fact;
    return 0;

}