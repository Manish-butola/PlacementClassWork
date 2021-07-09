#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 bool balanced(string str) {
        stack<char> s;
        for(int i =0;i<str.size();i++)
        {
            if(str[i]=='(' || str[i]=='{' || str[i]=='[')
                s.push(str[i]);
            else if(str[i]==')' && !s.empty() && s.top()=='(')
                s.pop();
            else if(str[i]=='}' && !s.empty() && s.top()=='{')
                s.pop();
                else if(str[i]==']' && !s.empty() && s.top()=='[')
                    s.pop();
            else
            return false;
        }
        if(s.empty())
            return true;
        return false;
    }
/*
bool balanced(string A)
{
stack<char>s;
  for(int i=0; i<A.size(); i++){
    if (A[i]=='('||A[i]=='{'||A[i]=='[')
            {
                s.push(A[i]);
            }else{
                 if (s.empty())
                 {
                    return false;
                 }
                 else if (A[i]==')')
                 {
                    if (s.top()=='(')
                    {
                       s.pop();
                    }else{
                        return false;
                    }

                 }
                 else if (A[i]=='}')
                 {
                    if (s.top()=='{')
                    {
                       s.pop();
                    }else{
                        return false;
                    }

                 }

                 else if (A[i]==']')
                 {
                     if (s.top()=='[')
                     {
                       s.pop();
                     }else{
                         return false;
                     }

                 }


            }

        }
    if (s.empty())
    {
        return true;
    }
    return false;
    }

*/
int main()
{
    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        int ans=balanced(s);

        if(ans)
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
    }
}
