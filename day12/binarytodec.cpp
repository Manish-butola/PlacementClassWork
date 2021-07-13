#include <iostream>
#include<math.h>

using namespace std;

int binaryToDecimal(int n)
{

    int ans=0,rem=0;
    long i=0;
    while(n>0)
    {
        rem=n%10;
        ans=ans+(rem*pow(2,i));
        n=n/10;
        i++;
    }
    return ans;




}

int main()
{
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
}
