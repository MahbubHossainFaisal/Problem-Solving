#include<iostream>
using namespace std;
#include<cmath>

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,d,x;
        double res,total;
        cin>>n;
        cin>>d;
        x=0;

        res=0;

        total=0;


        while(x<=n)
        {
            res=ceil(d/(x+1));

            total=x+res;

            if(total<=n)
            {
                cout<<"YES"<<endl;
                break;
            }
            x++;


        }

if(total>n)
            cout<<"NO"<<endl;





    }
}
