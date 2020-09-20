#include<iostream>
using namespace std;

int main()
{
    int T,b,count;
    cin>>T;
    long long a;


    while(T--)
    {   count=0;
        cin>>a;
        while(a>0)
        {

            b=a%10;
            if(b==4)
            {
                count++;
            }
            a=a/10;

        }

       cout<<count<<endl;

    }
}
