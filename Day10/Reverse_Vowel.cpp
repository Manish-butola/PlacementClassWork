#include <iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

bool vowels(char c)
{

    return c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U';
}

string reverse_Vowels(string s)
{

    int i,j;
    i=0;
    j=s.length()-1;
    while(i<j){
            while(i<j&&!vowels(s[i]))
            {
                i++;
            }
             while(i<j&&!vowels(s[j]))
            {
                j--;
            }
            swap(s[i],s[j]);
            i++;
            j--;
        }
return s;
}
int main(){

string s;
getline(cin,s);
string ans=reverse_Vowels(s);
cout<<ans;

return 0;
}
