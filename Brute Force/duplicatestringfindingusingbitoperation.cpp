#include<iostream>
using namespace std;

int main()
{
    char a[]="finding";
    char b[100];

    long int h=0,x=0;
    int i,j,k=0,Count=0,y=0,z=0;

    for(i=0;a[i]!='\0';i++)
    {
        x=1;
        x=x<<a[i]-97;
        if((x&h)>0)
        {
          cout<<a[i]<<" is duplicate"<<endl;

        }
        else
            h=x|h;
    }

}
