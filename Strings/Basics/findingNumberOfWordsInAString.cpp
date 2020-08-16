#include <bits/stdc++.h>
using namespace std;

void FindWords(string str)
{ int Count=1;
     for(int i=0;i<str.size();i++)
{

     if(str[i]==' ' && str[i-1]!=' ')
     {
        Count++;
     }

}
cout<<"Number of words are: "<<Count;
}


int main()
{
    string str;
        getline(cin,str);
    cout<<str<<endl;
    FindWords(str);
}
