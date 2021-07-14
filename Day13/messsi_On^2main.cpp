#include <iostream>
#include<vector>

using namespace std;

int missing(vector<int> &nums)
{

    int flag=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=0;j<n;j++){
            if(nums[i]==j)
                flag=1;
        }
        if(flag==0)
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

