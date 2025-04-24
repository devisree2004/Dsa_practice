#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> nums;
    int num;
    cout<<"enter numbers (type -1 to stop):"<<endl;
    while(cin>>num && num!= -1)
    {
        nums.push_back(num);
    } 
    int n= nums.size();
    for(int i=1; i<n;i++)
    {
        int key=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key)
        {
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
    cout<<"the sorted elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
}