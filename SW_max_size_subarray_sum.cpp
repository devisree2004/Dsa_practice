//longest subarray with sum less than or equal to target
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int maxSubarray (int target, vector <int> & nums)
{
    int l=0,maxlen=INT_MIN,sum=0;
    for(int r=0;r<nums.size();r++)
    {
        sum+=nums[r];
        while(sum>target)
        {
            sum-=nums[l];
            l++;
        }
        maxlen=max(maxlen,r-l+1);
    }
    return (maxlen==INT_MIN)?0:maxlen;
}
int main()
{
    int target=7;
    vector <int> nums ={2,3,1,2,4,3};
    int result=maxSubarray(target,nums);
    cout<<"result is :"<<result;
}