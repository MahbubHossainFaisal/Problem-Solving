#include<bits/stdc++.h>
#include<fstream>
using namespace std;

    bool keyword(string token)
    {
        string s[32]=
    {
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"

    };
    int i;
    for( i=0;i<32;i++)
    {
        if(token==s[i])
            {
                return true;
                break;
            }
    }
    if(i==32)
    {
       return false;
    }
    }


    bool numericConstant(string token)
    {
         int i;
    for(i=0;i<token.length();i++)
    {
        if((token[i]>=48) && (token[i]<=57))
        {
            continue;
        }
        else {
            break;
        }
    }

    if(i==token.length())
    {
       return true;
    }
    else {
       return false;
    }
    }

int main()
{
    ifstream inFile("Input.txt");

    if(inFile.fail())
    {
        cout<<"Unable to read file!"<<endl;
        exit(1);
    }
    string token;

    ofstream write;
    write.open("Output.txt");
    if(write.is_open())
    {
        write<<"Token"<<"   "<<"Type"<<endl;
         while(getline(inFile,token))
    {
        cout<<"Token is : "<<token<<endl;
        if(keyword(token))
        {
            cout<<"Found a keyword"<<endl;
            write << token <<"   "<<"Keyword"<<"\n";
        }

        if(numericConstant(token))
        {
            cout<<"Found a numeric constant"<<endl;
            write<<token<<" :  "<<"Numeric Constant"<<endl;
        }

    }

    }

    inFile.close();
    write.close();
    return 0;



}
