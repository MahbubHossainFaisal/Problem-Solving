#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
    ifstream inFile("vc.txt");

    if(inFile.fail())
    {
        cout<<"Unable to read file!"<<endl;
        exit(1);
    }
    string token;
    int cntVowel=0,cntConsonant=0;
   while(getline(inFile,token))
   {
       for(int i=0;i<token.size();i++)
       {
           if(token[i]=='a' ||
              token[i]=='e' ||
              token[i]=='i' ||
              token[i]=='o' ||
              token[i]=='u')
           {
               cout<<"("<<token[i]<<")";
               cntVowel++;
           }
           else
           {
               cout<<token[i];
               cntConsonant++;
           }
       }
       cout<<endl<<"Number of vowels: "<<cntVowel<<endl;
       cout<<"Number of consonants: "<<cntConsonant;
       inFile.close();
       return 0;
   }
}

