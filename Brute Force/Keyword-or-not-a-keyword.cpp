#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[32]=
    {
     "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"

    };

    string str;
    cin>>str;
    int i;
    for( i=0;i<32;i++)
    {
        if(str==s[i])
            {
                cout<<"It's a keyword"<<endl;
                break;
            }
    }
    if(i==32)
    {
        cout<<"It's not a keyword"<<endl;
    }

}
