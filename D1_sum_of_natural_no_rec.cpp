#include<iostream>
using namespace std;
int sum(int n)
{
    int res;
    if(n==1) return 1;
    else{
        return n+sum(n-1);
    }
}
 int main()
 {
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<sum(n);
    return 0;

 }