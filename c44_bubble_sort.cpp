#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> arr;
    int num;
    cout<<"enter the elements (type -1 to stop)";
    while(cin>>num&&num!=-1)
    {
        arr.push_back(num);
    }
    int n=arr.size(),temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    }
    cout<<endl<<"the sorted elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
