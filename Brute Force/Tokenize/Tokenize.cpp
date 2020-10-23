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
        else if(token[i]=='.')
            continue;
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

    bool validIdentifier (string str)
{
    if(!((str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z') || (str[0]=='_')))
    {
        return false;
    }
    for(int i=1;i<str.length();i++)
    {
        if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='9' && str[i]<='9') || (str[i]=='_')))
        {
            return false;
        }
    }
   return true;
}

bool isOperator(string s)
{
     for(int i=0;i<s.length();i++)
    {
        if(s[i]==37 || s[i]==38)
        {


                return true;


        }

        if(s[i]==42 || s[i]==43 || s[i]==45 || s[i]==47 || s[i]=='|' || s[i]=='^' ||s[i]=='=')
        {

                return true;

        }

        if(s[i]>=60 && s[i]<=63)
        {


              return  true;

        }
    }
    return false;
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
        write<<"Token"<<"       "<<"Type"<<endl;
     while(inFile >> token)
    {
      //  cout<<"Token is : "<<token<<endl;
        if(keyword(token))
        {
            cout<<"Found a keyword"<<endl;
            write << token <<"        "<<"Keyword"<<"\n";
        }

      else  if(numericConstant(token))
        {
            cout<<"Found a numeric constant"<<endl;
            write<<token<<"         "<<"Numeric Constant"<<endl;
        }
       else if(validIdentifier(token))
        {
            cout<<"Found a valid identifier"<<endl;
            write<<token<<"        "<<"Valid identifier"<<endl;
        }
        else if(isOperator(token))
        {
            cout<<"Found an operator"<<endl;
            write<<token<<"         "<<"Operator"<<endl;
        }
        else if (token==";")
        {
            cout<<"Found end of line"<<endl;
            write<<token<<"         "<<"End of line symbol"<<endl;
        }
        else if (token[0]=='\'' && token[token.size()-1]=='\'')
        {
            cout<<"Found a char value"<<endl;
            write<<token<<"       "<<"character"<<endl;
        }
        else if (token[0]=='[' && token[token.size()-1]==']')
        {
            cout<<"Found array size value"<<endl;
            write<<token<<"      "<<"Array size"<<endl;
        }
        else if(token=="{" || token=="}" || token=="(" || token==")")
            {
                cout<<"Found bracket"<<endl;
                write<<token<<"       "<<"Bracket"<<endl;
            }

        else{
            cout<<"Found invalid token"<<endl;
            write<<token<<"         "<<"Invalid"<<endl;
        }



    }

    }

    inFile.close();
    write.close();
    return 0;



}
