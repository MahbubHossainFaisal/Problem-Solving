#include <bits/stdc++.h>
using namespace std;

void ChangingCase(string change)
{
     int i,j;
     for(i=0;i<change.size();i++)
     {


        if(change[i]>=65 && change[i]<=90)
         {
             change[i]+=32;//32 is the difference between smaller and capital letters
         }
         else
            change[i]-=32;



     }

     cout<<change;

}

int main()

{
    string change;
    cin>>change;

    int Count=0;
    for(int i=0;i<change.size();i++)
    {
        if(change[i]<65 || change[i]>122)
         {
             cout<<"Insert a valid alphabetic string"<<endl;
            ++Count;
            break;
         }
    }
    if(Count==0)
    {
        ChangingCase(change);
    }

    return 0;

}


