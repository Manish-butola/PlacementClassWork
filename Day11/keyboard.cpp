#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<string> findWords(vector<string>& words) {

    vector<string> res;
		vector<int> pos{1, 2, 2, 1, 3, 1, 1, 1, 3, 1, 1, 1, 2, 2, 3, 3, 3, 3, 1, 3, 3, 2, 3, 2, 3, 2};
		for(int i = 0; i < words.size(); i++){
			int temp = pos[tolower(words[i][0])-'a'];
			int count = 0;
			for(int j = 0; j < words[i].size(); j++){
				if(temp != pos[tolower(words[i][j]) - 'a']){
					break;
				}
				count++;
			}
			if(count == words[i].length()){
				res.push_back(words[i]);
				continue;
			}
		}
		return res;
	}


int main()
{
    int n;
    cin>>n;
    vector<string>  vt;

    for(int i=0;i<n;i++)
    {
       string temp;

        cin>>temp;
        vt.push_back(temp);
    }
    vector<string> ans=findWords(vt);

    for(auto i:ans)
       cout<<i<<endl;




}
