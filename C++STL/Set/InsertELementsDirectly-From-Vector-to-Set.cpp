#include<bits/stdc++.h>
using namespace std;

int main()
{

cout<<"Insert vector elements: "<<endl;
vector <int> a(8);

for(auto &i:a)
{
    cin>>i;
}

set<int> see(a.begin(),a.end());

for(auto g:see)
{
    cout<<g<<" ";
}


}
