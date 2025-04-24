#include<iostream>
using namespace std;


bool ispalindrome(int l,int r,string & a)
{
    if(l>=r)return true;

    if(a[l]!=a[r]) return false;
    else return ispalindrome(l+1,r-1,a);

}



int main()
{
    string a;
    cout<<"enter the string:";
    cin>>a;

    if(ispalindrome(0,a.size()-1,a))
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;

}