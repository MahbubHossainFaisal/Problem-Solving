#include<iostream>
#include <vector>
#include<algorithm>



using namespace std;

int main()
{   int i,n,p;
cin>>n;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>p;
        v.push_back(p);
    }
 sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {

        cout<<v[i]<<" ";

    }
    v.clear();
    cout<<"\n";
}
