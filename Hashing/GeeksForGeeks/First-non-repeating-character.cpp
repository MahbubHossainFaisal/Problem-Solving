
/*
problem link : https://practice.geeksforgeeks.org/problems/non-repeating-character/0/?category[]=Hash&problemType=full&difficulty[]=0&sortBy=submissions&query=category[]HashproblemTypefulldifficulty[]0sortBysubmissions

*/

#include<bits/stdc++.h>
using namespace std;
#define Size 26

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int length;
        cin>>length;
        string s;
        cin>>s;

        int v[Size]={0};
        queue <char> q;
        for(int i=0;i<length;i++)
        {
            int index=s[i]-'a';
            v[index]++;
            q.push(s[i]);
        }

       while(!q.empty())
        {
            char x=q.front();
            int index=x-'a';
            if(v[index]==1)
            {
                cout<<x<<endl;
                break;
            }
            q.pop();
            if(q.empty())
            {
                cout<<"-1"<<endl;
            }
        }
    }
}
