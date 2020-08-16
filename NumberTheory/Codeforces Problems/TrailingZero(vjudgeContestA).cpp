#include<bits/stdc++.h>
using namespace std;

#define max 1000000000000
int main()
{int t;
cin>>t;
while(t--)
{


    long input,Count=0,base=2;
    cin>>input;
    while(base<=input/2)
    {
        if(input%base==0)
        {
            Count++;
            base++;
        }
        else
            base++;

    }
    cout<<Count+1<<endl;


}
}
