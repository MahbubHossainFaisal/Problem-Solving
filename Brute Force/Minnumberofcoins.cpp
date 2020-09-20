#include <iostream>
using namespace std;

int main()
{
    int d[4]={1,2,5,10};
    int v;
    int i=4;
    cin>>v;
    int count=0;
    int result=0;

    while(v!=0)
    {
        if(d[i]<=v)
        {
            result=result+d[i];
           v=v-10;
           count++;
        }

       else
       {
           i--;
       }
    }
    cout<<count;
}
