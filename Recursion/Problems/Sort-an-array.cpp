#include<bits/stdc++.h>
using namespace std;

void Insert(vector <int> &v,int lastValue)
{
    if(v.size()==0 || v[v.size()-1]<=lastValue){
        v.push_back(lastValue);
        return;
    }
    int newLastValue = v[v.size()-1];
    v.pop_back();
    Insert(v,lastValue);
    v.push_back(newLastValue);
    return;
}

void Sort(vector <int> &v)
{
    //base condition
    if(v.size()==1){
        return;
    }
    int lastValue = v[v.size()-1];
    v.pop_back();
    Sort(v);
    Insert(v,lastValue);

}



int main()
{
    vector <int> v;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"Before sorting: "<<endl;
    for(auto i: v)
    {
        cout<<i<<endl;
    }
    Sort(v);
    cout<<"After sorting: "<<endl;
    for(auto i: v)
    {
        cout<<i<<endl;
    }



}
