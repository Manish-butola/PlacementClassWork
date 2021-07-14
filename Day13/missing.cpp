#include <iostream>
#include<vector>

using namespace std;

int missing(vector<int> &v)
{
int sum=0;
int n=v.size();
for(auto i:v)
    sum+=i;
return(n*(n+1)/2-sum);

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
