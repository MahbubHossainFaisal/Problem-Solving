#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N,M,X,i;
        cin>>N>>M>>X;

        int A[N];
        int B[M];

        for(i=0;i<N;i++)
        {
            cin>>A[i];

        }
        sort(A,A+N);

        map <int,int> s;
          for(i=0;i<M;i++)
        {
            cin>>B[i];
            s[B[i]]++;
        }




        int sum=0;
        for(i=0;i<N;i++)
        {
            if(s.find(X-A[i])!=s.end())
            {
                if(sum!=0) cout<<","<<" ";
                cout<<A[i]<<" "<<X-A[i];
                sum++;
            }
        }
        if(sum==0)
            cout<<-1;
            cout<<endl;

    }
    return 0;
}

