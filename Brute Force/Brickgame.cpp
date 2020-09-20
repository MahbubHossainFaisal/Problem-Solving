#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main()
{
    int i,n,p,x,j,m;
    cin>>n;
    for(i=1;i<=n;i++)
    {    cin>>m;

        vector<int> v;
         for(j=0;j<m;j++)
         {
             cin>>p;
             v.push_back(p);
         }
         sort(v.begin(),v.end());

        int x=v.size()/2.0;
        cout<<"Case"<<" "<<i<<": "<<v[x]<<"\n";
        v.clear();





    }
}
