
/* Problem Link: https://practice.geeksforgeeks.org/problems/substrings-with-similar-first-and-last-characters/0/?category[]=Hash&problemType=full&difficulty[]=-1&difficulty[]=0&page=1&sortBy=accuracy&query=category[]HashproblemTypefulldifficulty[]-1difficulty[]0page1sortByaccuracy
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int length;
	    cin>>length;
	    string s;
	    cin>>s;
	    int Count=0;

	    for(int i=0;i<length;i++)
	    {
	        int x=s[i];
	        Count++;
	        for(int j=i+1;j<length;j++)
	        {
	            if(x==s[j])
	            Count++;
	        }
	    }

	    cout<<Count;
	    Count=0;
	}
	return 0;
}
