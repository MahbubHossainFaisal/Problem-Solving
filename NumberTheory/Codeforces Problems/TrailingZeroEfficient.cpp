#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long input;
        cin>>input;
        int i,Count=0;
        for(i=1;i<=sqrt(input);i++)
        {
            if(input%i==0)
            {
                if(input/i==i)
                    Count++;
                else
                    Count+=2;
            }
        }
        cout<<Count-1<<endl;
    }
}

