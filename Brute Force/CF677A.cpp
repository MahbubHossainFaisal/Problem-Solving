#include <bits/stdc++.h>
using namespace std;



int main()
{
	int n,h;
	cin>>n>>h;
	int cnt=0;
	int *friends = new int[n];
	for(int i=0;i<n;i++){
		cin>>friends[i];

		if(friends[i] <= h) cnt++;
		else{
			cnt+=2;
		}
	}
	cout<<cnt;



}