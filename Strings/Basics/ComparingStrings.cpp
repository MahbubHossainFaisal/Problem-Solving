#include<bits/stdc++.h>
using namespace std;

void compare(string a1,string a2)
{
    int i,j;
    for(i=0,j=0;i!=a1.size()&&j!=a2.size();i++,j++)
    {
        if(a1[i]!=a2[j])
        {
            break;
        }
    }
    if(a1[i]==a2[j])
        cout<<"Strings are equal"<<endl;
    else if (a1[i]<a2[j])
    {
        cout<<a1[i]<<" is smaller than "<<a2[j]<<endl;
    }
    else
        cout<<a1[i]<<" is greater than "<<a2[j]<<endl;
}

int main()
{
    string a1,a2;
    cin>>a1>>a2;
    compare(a1,a2);


}
