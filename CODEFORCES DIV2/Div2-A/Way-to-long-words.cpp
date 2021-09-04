#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;

	while(n--){
		string s;
		cin>>s;

		if(s.size()<=10) cout<<s<<endl;

		else if(s.size() > 10){
			int cnt=0;

			for(int i=0; i<s.size(); i++){
				if(i==0 or i==s.size()-1) continue;
				else cnt++;
			}

			cout<<s[0]<<cnt<<s[s.size()-1]<<endl;
		}
	}
}