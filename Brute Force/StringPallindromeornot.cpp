#include<iostream>
using namespace std;

int main()
{
    char pal[]="mADDona";
    int i,j;
    for(j=0;pal[j]!='\0';j++)
    {
    if(pal[j]>='A' && pal[j]<='Z')
    {
        pal[j]=pal[j]+32;
    }
    }

    cout<<pal<<endl;
    j=j-1;

    for(i=0;i<=j;i++,j--)
    {

       if(pal[i]!=pal[j])
        {
            cout<<"It's not a palindrome"<<endl;
            break;
        }



   if(pal[i]==pal[j])
    {
        cout<<"It's a palindrome"<<endl;
    }

    return 0;
}
}
