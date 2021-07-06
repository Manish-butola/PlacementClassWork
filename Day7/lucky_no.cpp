#include <iostream>
#include<bits/stdc++.h>

using namespace std;


void luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> vec;
        int r=matrix.size();
        int c=matrix[0].size();
        int x=INT_MAX;
        int y=INT_MIN;
        int col=0;
        for(int i=0;i<r;i++)
        {
         x=INT_MAX;
         y=INT_MIN;
         col=0;
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]<x)
                {
              x=min(x,matrix[i][j]);
              col=j;
                }
            }
            for(int j=0;j<r;j++)
            {
              y=max(y,matrix[j][col]);
            }
            if(x==y)
            {
                vec.push_back(x);
                //for(int j=0;j<vec.size();j++){
            //cout<<vec[j]<<" ";
            //cout<<endl;}


            }

        }


        for(int j=0;j<vec.size();j++){
            cout<<vec[j]<<" ";
        cout<<endl;}


    }





      int main(){
	vector<vector<int>> v {{3, 7, 6}, {9, 11,13}, {15, 16, 17}};

        luckyNumbers(v);
    }


