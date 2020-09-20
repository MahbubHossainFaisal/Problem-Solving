#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    int count=0;
    string a,b;

    cin>>a;
    while(1)
    {
        cin>>b;
        count++;
         if(count>5)
            break;

        if(b[0]==a[0] || b[1]==a[1])
        {
            cout<<"YES";
            return 0;
        }

    }
    cout<<"NO";
}
