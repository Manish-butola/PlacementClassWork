#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],s[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		s[i]=a[i];
	}
	int c=0;
	sort(s,s+n);
	for(int i=0;i<n;i++){
		if(a[i]!=s[i]){
			c++;
		}
	}
	cout<<c;
	
}