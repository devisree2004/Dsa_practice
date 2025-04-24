#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"enter any alphabet"<<endl;
    cin>>a;
    switch(a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<a<<" is a vowel"<<endl;
        default:cout<<a<<" is a consonaut"<<endl;
    }
    return 0;
}