#include<iostream>
using namespace std;
#include<string>

int main()
{
    char arr[10]={'A','E','I','O','U','a','e','i','o','u'};

    string a;
    int t,Count;
    Count=0;
    cin>>t;
    while(t--)
    {
        cin>>a;

        for(int i=0;i<10;i++)
        {
            for(int j=0;j<a.size();j++)
            {
                if(arr[i]==a[j])
                {
                    Count++;
                }
            }
        }

        cout<<Count<<endl;
        Count=0;
    }
}
