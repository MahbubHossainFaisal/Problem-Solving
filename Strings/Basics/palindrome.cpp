#include<iostream>
using namespace std;
#include<string>

int main()
{ string s;
    cin>>s;
    int i,j;
for(i=0,j=s.size()-1;i<=j;i++,j--)
{
    if(s[i]!=s[j])
    {
        cout<<"The string is not a palindrome"<<endl;
        break;
    }

}
if(s[i]==s[j])
{
    cout<<"The string is a palindrome"<<endl;
}


}
