
/* Problem Link:
https://practice.geeksforgeeks.org/problems/substrings-with-similar-first-and-last-characters/0/?category[]=Hash&problemType=full&difficulty[]=-1&difficulty[]=0&page=1&sortBy=accuracy&query=category[]HashproblemTypefulldifficulty[]-1difficulty[]0page1sortByaccuracy
as the problem is under a-z letters
a-z ascii codes are from 98 to 122

*/

#include<bits/stdc++.h>
using namespace std;

#define Size 26


int countSubstrings(string s,int length)
{
    int Count=0;
    int arr[Size]={0};

    for(int i=0;i<length;i++)
    {
        arr[s[i]-'a']++; // example for first element where i=0,s[i]= suppose 'a', so 'a'-'a'=0. So,arr[0]++
    }
    for(int i=0;i<Size;i++)
    {
        Count+=(arr[i]*(arr[i]+1)/2); //(frequency*(frequency+1)/2 using as a formula for counting each string where first and last element of that string are same.)
    }
    return Count;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int length;
        cin>>length;
       int result= countSubstrings(s,length);
       cout<<result<<endl;
    }
}
