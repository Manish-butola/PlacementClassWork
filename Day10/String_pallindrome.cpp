#include <iostream>
#include<string>
using namespace std;

bool isValid(string s){

  int right=s.length()-1;
   int left=0;
   while(left<=right)
   {
       if(s[left]==s[right])
        {
            left++;
            right--;
        }

        if(!char(s[left]))
        {
            left++;
            continue;
        }
        if(!char(s[right]))
        { right--;
           continue;
        }

        if(tolower(s[left])!=tolower(s[right])){
                return false;}

       left++;
       right--;
   }

    return true;


}

int main()
{
    string s;
    cin>>s;
    int ans=isValid(s);
    if(ans)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    return 0;
}
