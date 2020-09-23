
/* Map:

map is a container formed with pairs where,
in every pair there is a key and a value corresponding to that key.
-Values under maps are also sorted and are in ascending order.

-map can have only unique elements as it's key while pairing.

-Every key has a value of it's own,but if the value is not given
then the map gives it a zero value by default in terms of integer type.

Declaration:
map <key_data_type,value_data_type> variable_name;
exp: map <int,int> m;


problem: In an array of strings,count the same number of strings.Then  if user give a string name
find the string in the map and find the count of that particular string.

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[10]={"abcd","abcd","acb","bac","cab","cab","abcd","cds","acer","asdx"};

    map <string,int> m;

    for(int i=0;i<10;i++)
    {
        m[s[i]]++;
        //Here in map, key is s[i],which is act like an array index.
        //and ++ increment operator is incrementing map's value which was 0 by default.
    }

    for(auto i: m)
    {
        cout<<i.first<<"-->"<<i.second<<endl;//maps elements can be accessed like same as we access pair elements.
    }

    cout<<endl<<"Give a string : "<<endl;
    string temp;
    cin>>temp;

    if(m.find(temp)==m.end()) cout<<"string is not found"<<endl;
    else{
        cout<<m[temp];
    }


}


