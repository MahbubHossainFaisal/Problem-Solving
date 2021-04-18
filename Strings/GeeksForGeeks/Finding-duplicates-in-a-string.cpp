#include <bits/stdc++.h>
using namespace std;


void check(string s){
	if(s.size()==0){
		cout<<"NULL"<<endl;
	}

	unordered_map<int,int> m;
	for(int i=0;i<s.size();i++){
		m[s[i]]++;
	}

	for(int i=0;i<s.size();i++){
		if(m[s[i]] > 1){
			cout<<s[i]<<" ";
			m[s[i]]=0;
		}
	}


}

int main()
{
	string s;
	cin>>s;
	check(s);
}