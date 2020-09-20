#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
int a,b;
    for(int i=1;i<=T;i++)
    {

        cin>>a>>b;
        if(b%a==0)
        {
            cout<<a;
        }
    }
}
