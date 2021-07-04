#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	string s[n],s2[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
for(int c=0;c<n;c++){

    for(int i=0;i<n;i++){
	if(a[i]==c){
		s2[c]=s[i];
	
	}
}
}
	for(int i=0;i<n;i++){
		cout<<s2[i];
	}

}