#include <iostream>

using namespace std;

string addBinary(string a, string b)
    {

        int i=a.length()-1;
        int j=b.length()-1;
        int carr=0;
        string result;

        while(i>=0||j>=0)
        {
            int sum=carr;
            if(i>=0)
                sum=sum+a[i--]-'0';
            if(j>=0)
                sum=sum+b[j--]-'0';
            carr=sum/2;
            result+=to_string(sum%2);
        }
        if(carr)
        {
            result+=to_string(carr);

        }
        reverse(result.begin(),result.end());
        return (result);
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<addBinary(a,b)<<endl;
    return 0;
}
