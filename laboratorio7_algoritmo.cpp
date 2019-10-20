#include<stdio.h> 
#include<iostream>

using namespace std;

int a[]={0,1,5,8,9};
int b[]={-1,-1,-1,-1,-1};

int  max ( int a, int b) { return (a> b)? a: b;}

int rodCutting(int n){
	a[0]=0;
	for (int j=1; j<=n; j++){
		int q=-1;
		for(int i=1; i<=j; i++){
			q = max(q, a[i]+b[j-i]);
		}
		b[j] = q;
	}
}

int main(){
	cout<<rodCutting(4);
}

