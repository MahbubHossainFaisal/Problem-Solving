#include<iostream>
using namespace std;


int main()
{
	char s[50];
	gets(s);
	int i;
	for (i = 0;s[i] != '\0';i++)
	{
	    if(s[i]>='A' && s[i]<='Z')

		s[i] = s[i] + 32;

		else if(s[i]>='a' && s[i]<='z')

            s[i]=s[i]-32;

       else

            continue;

            	}

	printf("%s",s);
	return 0;
}
