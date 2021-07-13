#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> vt(n);
    for(int i=0;i<n;i++)
        cin>>vt[i];
    int ans=0;

    for(auto i:vt)
        ans^=i;

    cout<<ans;

    return 0;
}
