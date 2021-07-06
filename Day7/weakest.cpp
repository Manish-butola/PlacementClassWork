#include <iostream>
#include<bits/stdc++.h>

using namespace std;


void Weak(vector<vector<int>>& mat, int k)
{

   set<pair<int,int>> m;
    vector<int> ans;
    int i;
    for(i=0;i<mat.size();i++)
    {
        int count=0;
        int j;
        for(j=0;j<mat[i].size();j++)
        {
            if(mat[i][j]==1)
                count++;
            else
            {
                break;
            }
        }
       int n=i;
       m.insert({count,n}) ;
    }


    for(auto it=begin(m);k>0;++it,--k)
        {
            ans.push_back(it->second);
        }

        for(auto item: ans)
        cout << item << endl;






}



int main(){
	vector<vector<int>> v {
 {1,1,0,0,0},
 {1,1,1,1,0},
 {1,0,0,0,0},
 {1,1,0,0,0},
 {1,1,1,1,1}
};

        Weak(v,3);
}




