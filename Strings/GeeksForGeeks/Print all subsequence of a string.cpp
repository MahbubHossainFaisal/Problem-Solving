#include <bits/stdc++.h>
using namespace std;

void subsequence(string t,int i,int n,string s){
	if(i==n){
		cout<<t<<endl;
	}

	else
	{
		subsequence(t,i+1,n,s);
		t=t+s[i];
		subsequence(t,i+1,n,s);
	}
}


int main()
{
	string s;
	cin>>s;

	subsequence("",0,s.size(),s);
	return 0;
}