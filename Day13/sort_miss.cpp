#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int missing(vector<int> &nums)
{

   //int n=nums.size();
   sort(nums.begin(),nums.end());
   for(int i=0;i<nums.size();i++)
   {
       if(nums[i]!=i)
            return i;

   }

    return -1;
    }

int main()
{

    int n;
    cin>>n;
    vector<int> vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    cout<<missing(vt);
}
