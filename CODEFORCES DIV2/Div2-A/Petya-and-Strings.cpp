#include <bits/stdc++.h>
using namespace std;



int main()
{
	string s1,s2;

	for(int i=0; i<s1.size(); i++){
		s1[i] = tolower(s1[i]);
	}
	for(int i=0; i<s2.size(); i++){
		s2[i] = tolower(s2[i]);
	}

	int counter =0;

	for(int i=0; i<s1.size(); i++){
		if(s1[i]< s2[i]) {
			counter = -1;
			break;
		}
		else if(s1[i] > s2[i]){
			counter = 1;
			break;
		}
	}

	cout<<counter<<endl;
}