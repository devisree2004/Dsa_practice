#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> pizzas;


    cout<<"enter -1 to stop";
    int num;
    while(true)
    {
        cin>>num;
        if (num!=-1)
        {
            pizzas.push_back(num);
        }
        else 
            break;
    }

    sort(pizzas.begin(),pizzas.end());
    int len=pizzas.size(),gain=0;
    int n=len/4;

    for(int i=1;i<=n;i+=2)
    {
        gain+=pizzas[--len];
    }
    for(int i=2;i<=n;i+=2)
    {
        gain+=pizzas[len-2];
    }
    cout<<"the weight you gain is : "<<gain;
    

}