#include <iostream>
#include<vector>
using namespace std;

int signleno(vector<int>& nums)
{
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j])
                count++;
        }

    if(count%2!=0)
       return nums[i];
    }
    return -1;



}
int main()
{
     int n;
    cin>>n;
    vector<int> vt(n);
    for(int i=0;i<n;i++)
        cin>>vt[i];
    cout<<signleno(vt);
}

