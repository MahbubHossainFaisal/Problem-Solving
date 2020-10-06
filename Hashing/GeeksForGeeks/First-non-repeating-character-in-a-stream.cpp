
/*

Problem link:https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream/0/?category[]=Hash&problemType=full&difficulty[]=0&difficulty[]=1&page=1&sortBy=submissions&query=category[]HashproblemTypefulldifficulty[]0difficulty[]1page1sortBysubmissions


*/

#include <bits/stdc++.h>
using namespace std;

void nonRepeating(char c[],int n)
{
    map <char,int> m;
    queue <char> q;
    int i;

    for(i=0;i<n;i++)
    {
        if(m.find(c[i])==m.end())
        {
            q.push(c[i]);
        }
        m[c[i]]++;
        if(m[q.front()]==1)
        {
            cout<<q.front()<<" ";
        }
        else{
            while(!q.empty())
            {
                q.pop();
                if(m[q.front()]==1){
                    cout<<q.front()<<" ";
                    break;
                }
            }
            if(q.empty())
            {
                cout<<-1<<" ";
            }
        }
    }

    while(!q.empty())
    {
        q.pop();
    }

    m.clear();
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char c[n];
        int i;
        for(i=0;i<n;i++)
        {
            cin>>c[i];
        }

        nonRepeating(c,n);
    }
    return 0;
}
