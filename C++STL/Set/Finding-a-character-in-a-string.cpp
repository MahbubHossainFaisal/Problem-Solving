/* Problem:

A string is given. You have to find a particular char in the string.

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter a string: "<<endl;
    string s;
    cin>>s;
    set <char> st;
    int stringSize=s.size();

    for(int i=0;i<stringSize;i++)
    {
        st.insert(s[i]);
    }
    cout<<"SET values: "<<endl;
    for(auto i: st)
    {
        cout<<i<<" "; //to show what is inside into the set.
    }
    cout<<endl<<"SET values in reverse: "<<endl;
    for(auto i=st.rbegin();i!=st.rend();i++)
    {
        cout<<*i<<" ";
    }

    auto v=*st.begin();
    cout<<endl<<"First set value: "<<v;

    //finding the character.
    cout<<endl<<"Insert a character to find in the string: ";
    char input;
    cin>>input;

    if(st.find(input)==st.end()) cout<<"Not found" <<endl;
    else cout<<"Element Found!"<<endl;
/*
st.find will return a pointer address and st.end will do the same.Now st.end() will return
address of next index of last element in the set.So,if the find() function become equal
to the end() function means it traversed the whole set but did not find the specific element.
that's why it will return not found.But if they are unequal ,then it means the element found in the set.
*/



}
