#include <iostream>
#include<bits/stdc++.h>

using namespace std;


string ExcelCol(int num)
{
    string ans="";
    while(num>0){

        char c='A'+(num-1)%26;
        ans=c+ans;
        num=(num-1)/26;
    }

    return ans;
}
int main()
{
    int n;
    cin>>n;

    string s=ExcelCol(n);
    cout<<s;
    return 0;
}
