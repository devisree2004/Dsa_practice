#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> nums;
    int num;
    cout<<"enter numbers:(type -1 to stop):";
    while(cin>>num && num!=-1)
    {
        nums.push_back(num);
    }
    int n=nums.size();
    for(int i=0;i<n-1;i++)
    {
        int min=nums[i];
        for(int j=i+1;j<n;j++)
        {
            if(min>nums[j])
            {
                min=nums[j];
            }
            if(min != nums[i])
            {
                nums[i]=nums[i]+nums[j];
                nums[j]=nums[i]-nums[j];
                nums[i]=nums[i]-nums[j];
            }

        }
    }
    cout<<"the sorted array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
}