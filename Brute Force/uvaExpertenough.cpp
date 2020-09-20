#include<iostream>
#define SIZE 100001
using namespace std;
int main()
{

int T;
cin>>T;
while(T--)
{
    int d;
    int l[SIZE];
    int h[SIZE];
    string m[SIZE];
    string x;
    for(int i=1;i<=d;i++)
    {
        cin>>m[i-1];
        cin>>l[i-1];
        cin>>h[i-1];
    }
    int q,input;
    for(int i=1;i<=q;i++)
    {
        cin>>input;
        int count=0;
        for(int j=0;j<d;j++)
        {
            if(input>=l[j] && input<=h[j])
            {
                count++;
                x=m[j];
            }

        }
        if(count==1)
        {
            cout<<x;
        }
        else
        {
            cout<<"UNDETERMINED";
        }
        cout<<endl;
    }
}
}
