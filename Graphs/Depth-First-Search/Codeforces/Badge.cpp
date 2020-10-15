/*
Problem Link: https://codeforces.com/problemset/problem/1020/B
*/

#include<bits/stdc++.h>
using namespace std;
#define N 1005
int a[N],vis[N];
int main()
{


	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		int j=i;
		while(vis[j]!=i) {
            vis[j]=i;
            j=a[j];
		}

		printf("%d ",j);
	}
}
