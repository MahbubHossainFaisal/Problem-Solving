
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cin>>str;
        int i;
    for(i=0;i<str.length();i++)
    {
        if((str[i]>=48) && (str[i]<=57))
        {
            continue;
        }
        else {
            break;
        }
    }

    if(i==str.length())
    {
        cout<<"It's a numeric constant"<<endl;
    }
    else {
        cout<<"It's not a numeric constant"<<endl;
    }
}
