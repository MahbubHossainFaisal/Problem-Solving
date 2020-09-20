#include <iostream>
using namespace std;

int main()
{
    char dup[]="findingggnneoe";
    int i,j,k=0,counter=0;



    for(i=0;dup[i]!='\0';i++)
    {
        for(j=i+1;dup[j]!='\0';j++)
        {
            if(dup[j]==dup[i])
            {
                counter++;
            }
        }
    }

    cout<<"Duplicate characters are:"<<endl;

    cout<<counter;
}
