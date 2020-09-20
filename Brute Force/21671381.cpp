#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int ar[102]={0},arr[102]={0},n,l,k,b;
		cin>>n;
		while(n--)
		{
			cin>>b;
			ar[b]=1;
		}
		cin>>n;
		while(n--)
		{
			cin>>b;
			arr[b]=1;
		}
		cin>>n;k=1;
		while(n--)
		{
			cin>>b;
			if(ar[b]!=1)k=0;
		}
		cin>>n;l=1;
		while(n--)
		{
			cin>>b;
			if(arr[b]!=1)l=0;
		}
		if(l==1&&k==1)
		{
			cout<<"yes\n";
		}
		else cout<<"no\n";
	}
	return 0;
}