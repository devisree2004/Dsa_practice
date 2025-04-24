#include<iostream>
using namespace std;

int main()
{
    string a;
    cout<<"enter a word:";
    cin>>a;
    int c=0;
    int n=a.length();
    for (int i=0;i<n;i++)
    {
        if(a[i]==a[n-1-i]) continue;
        else 
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        cout<<"not a palindrome";
    }
    else cout<<"palindrome";
    return 0;
}