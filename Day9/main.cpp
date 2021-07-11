#include <iostream>

using namespace std;
int rtoi(char ch){

switch(ch){


case'I':return 1;
case 'V':return 5;
case 'X':return 10;
case 'L':return 50;
case 'C':return 100;
case'D':return 500;

case 'M':return 1000;
}



}






int roman(string s)
{

        int num=0;
  for(int i=0;i<s.length();i++){
    {

        if(rtoi(s[i])<rtoi(s[i+1])){
            num-=rtoi(s[i]);
        }
        else
           num+=rtoi(s[i]);
    }
  }

   return num;


}

 /* int num=0;
  for(int i=0;i<s.length();i++){

    if(rtoi(s[i]<rtoi(s[i+1])))
    {

        if(rtoi(s[i]<rtoi(s[i+1]))){
            num=num+rtoi(s[i+1])-rtoi(s[i]);
            i++;}
        else
                num=num+rtoi(s[i]);
    }
  }
   return num;
}*/
int main()
{
string s;
cin>>s;
cout<<roman(s)<<endl;
return 0;
}






