#include<iostream>
using namespace std;

class Solution {
public:
    string reverseWords(string moves) {
            int i,origin=0;
    for(i=0;i<moves.size();i++)
    {
        if(moves[i]=='L')
        {
            origin++;
        }
        else if(moves[i]=='R')
            origin--;
        else if(moves[i]=='U')
        {
            origin++;
        }
        else if(moves[i]=='D')
            origin--;
        else
            break;
    }
    if(i==moves.size() && origin==0)
        return "True";
    else
        return "False";
    }
};


int main()
{
    string moves;
    cin>>moves;

    Solution s;
    cout<<s.reverseWords(moves);


}

