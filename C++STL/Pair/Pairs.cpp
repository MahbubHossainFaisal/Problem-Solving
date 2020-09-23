/* Problem: An array of elements are given.
I have to tell which elements are in which indexes (1 based index)
and after that we also have to sort the elements and show their indexes before the
sorting */


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector < pair<int,int>> v(10); //vector of pairs.

    int arr[10]={2,7,4,3,1,9,13,11,8,5};

    for(int i=0;i<10;i++)
    {
        v[i]=make_pair(arr[i],i+1);//inserting pairs in the vector indexes
    }
    cout<<"before sorting vector is: "<<endl;
    for(auto i:v)
    {
        cout<<"ELement: "<<i.first<<": at index :  "<<i.second<<endl;
    }

    sort(v.begin(),v.end()); //sorting the vectors.
    cout<<"After sorting vector becomes: "<<endl;

    for(auto i:v)
    {
        cout<<"ELement: "<<i.first<<": at index :  "<<i.second<<endl;
    }


}
