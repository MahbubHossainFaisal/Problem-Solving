
/* Problem: An array of elements are given.
I have to tell which elements are in which indexes (1 based index)
and after that we also have to sort the elements and show their indexes before the
sorting
This time sort the second values of the pair*/


#include <bits/stdc++.h>
using namespace std;


bool sortbysecond(pair<int,int> &a,pair <int,int> &b)
{
    return(a.second<b.second);
}
int main()
{
    vector < pair<int,int>> v(10); //vector of pairs.

    int arr[10]={2,7,4,3,1,9,13,11,8,5};

    for(int i=0,j=11;i<10,j>1;i++,j--)
    {
        v[i]=make_pair(arr[i],j-1);//inserting pairs in the vector indexes
    }
    cout<<"before sorting vector is: "<<endl;
    for(auto i:v)
    {
        cout<<"ELement: "<<i.first<<": at index :  "<<i.second<<endl;
    }

    sort(v.begin(),v.end(),sortbysecond); //sorting the vectors.This sorting is occuring using the second values of each pair.
    cout<<"After sorting vector becomes: "<<endl;

    for(auto i:v)
    {
        cout<<"ELement: "<<i.first<<": at index :  "<<i.second<<endl;
    }


}
