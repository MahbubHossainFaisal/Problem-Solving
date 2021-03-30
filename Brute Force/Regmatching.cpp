#include<bits/stdc++.h>

using namespace std;


string convertToString(string a, int Size)
{
    int i;
    string s = "";
    for (i = 0; i < Size; i++) {
        s = s + a[i];
    }
    return s;
}


void checkFunction(){

    string regx,result;
    //char regx[25],result[25];

    cout<<"Enter the Regular Expression : ";
    cin>>regx;
    cout<<"Enter the result : ";
    cin>>result;



    if(regx[3]=='*'){

       int size_regx=regx.size();
       int size_result=result.size();
       string regxS = convertToString(regx,size_regx);
       string resultS = convertToString(result,size_result);

       // cout<<regxS.substr(0,2);
        cout<<resultS;



    }
    else {
        cout<<"not match";
    }

}

void CaseCheck()
{
     cout<<"\n 1. Check \n 2.Exit"<<endl;
    int check;
    cin>>check;
    switch(check){

    case 1: checkFunction();
        cout<<"\n";
        CaseCheck();
        break;
    case 2: exit(0);
        break;
    default:
        cout<<"Error";

    }
}

int main()
{
    CaseCheck();
    return 0;
}
