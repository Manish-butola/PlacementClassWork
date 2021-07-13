#include <iostream>
#include<vector>
using namespace std;
int signleno(vector<int>& nums)
{
    short(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i=i+2){
        if(nums[i]!=nums[i+1])
          return nums[i];}
    return nums[nums.size()-1];
}

int main()
{
     int n;
    cin>>n;
    vector<int> vt(n);
    for(int i=0;i<n;i++)
        cin>>vt[i];
    cout<<singleno(vt);
}
