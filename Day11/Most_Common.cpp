#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
string mostCommonWord(string paragraph, vector<string>& banned) {
{
    for(int i=0;i<paragraph.size();i++)
        paragraph[i]=isalpha(paragraph[i])?tolower(paragraph[i]):' ';

       stringstream ss(paragraph);
       map<string,int>m;
       string word;
       while(ss>>word)
       {
           auto it=find(banned.begin(),banned.end(),word);
           if(it==banned.end())
           {
               m[word]++;
           }
       }
       int max=-999;
       for(auto i:m){

        if(i.second>max){

           max=i.second;
           word=i.first;
           }

       }


    return word;
}


}

int main()
{
    string para;
    getline(cin,para);

    int n;
    cin>>n;

    vector<string> vt;
    for(int i=0;i<n;i++)
    {

        string temp;
        vt.push_back(temp);

    }

    string ans=mostCommonWord(para,vt);
    cout<<ans<<endl;

}
