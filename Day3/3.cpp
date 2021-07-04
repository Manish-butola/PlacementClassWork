  
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n/2;i++){
		int freq=a[2*i];
		int value=a[2*i+1];
		for(int j=1;j<=freq;j++){
			cout<<value<<" ";
		}
	}
	

}