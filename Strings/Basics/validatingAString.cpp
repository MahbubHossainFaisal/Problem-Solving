//The string should not contain any special letter .It will contain only small,capital letters and numbers
#include<bits/stdc++.h>
using namespace std;
/*ascii codes
from A-Z (65-90)
from a-z (97-122)
from 0-9 (48-57)
except all these ,other values are invalid
*/
int main(){

 string  str;
 cin>>str;
 bool valid;
 for(int i=0;i<str.size();i++)
 {
     if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122 || str[i]>=48 && str[i]<=57)
    valid=true;
    else
       {
           valid=false;
       break;
       }
 }
 if(valid)
    cout<<"Valid String";
 else
    cout<<"Invalid String";
}
