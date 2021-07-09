#include <bits/stdc++.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class Solution {
   public:
   string solve(string a, string b){
      string ret = "";
      int na = a.size();
      int nb = b.size();
      int i = na - 1;
      int j = nb - 1;
      int carry = 0;
      while(i >= 0 || j >= 0){
         int addA = i >= 0 ? a[i] - '0' : 0;
         int addB = j >= 0 ? b[j] - '0' : 0;
         int sum = addA + addB + carry;
         carry = sum / 2;
         sum %= 2;
         ret += to_string(sum);
         i--;
         j--;
      }
      if(carry)
         ret += to_string(carry); reverse(ret.begin(), ret.end());
         return ret;
   }
};
main(){
   string a = "", b = ""; Solution ob;
   cin>>a>>b;
   cout << ob.solve(a, b);
}
