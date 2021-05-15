#include <bits/stdc++.h>
using namespace std;

void countSplit(string s){
	int count=0;
	int cnt0=0,cnt1=0;
	for(int i=0;i<s.size();i++){
		if(s[i] == '0') cnt0++;
		if(s[i] == '1') cnt1++;
		if(cnt0 == cnt1) count++;
	}
	cout<<count;
}


int main()
{
	string s;
	cin>>s;
	countSplit(s);
}