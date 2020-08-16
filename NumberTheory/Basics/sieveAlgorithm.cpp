 #include <bits/stdc++.h>

 using namespace std;

 #define Max 10000000

void sieve(int n)
{
    int *a=new int[Max];
    a[0]=0;
    a[1]=0;
    int i,j;
    for( i=2;i<=n; i++)
    {
        a[i]=1;
    }
    for(i=2;i<=sqrt(n); i++)
    {
         if(a[i]==1)
    {
        for(j=2;i*j<=n;j++)
        {

            a[i*j]=0;
        }
    }

    }
    for(i=2;i<=n;i++)
    {
        if(a[i]==1)
        {
            cout<<i<<"is a prime number"<<endl;
        }
    }
}


int main()
{
    int n;
    cout<<"Insert the desired number"<<endl;
    cin>>n;
    sieve(n);
}
