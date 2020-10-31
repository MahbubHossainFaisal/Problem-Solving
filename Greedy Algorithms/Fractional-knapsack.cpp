
/*

Objects(x): 1  2   3   4   5   6   7
profit(p) : 10 5   15  7   6   18  3
weight(w) : 2  3   5   7   1   4   1

A bag can take weight of 15 kg only.
Goal is to insert weight into the bag from the given objects which will bring the max profit

constraint: summation of  XiWi<=15 and Objective: max profit(XiPi)

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<float,float>>object;


    float profit[]={10,5,15,7,6,18,3};
    float weight[]={2,3,5,7,1,4,1};
    map <int,int> mp;
    for(int i=0;i<7;i++)
    {
            float result=profit[i]/weight[i];
        object[i]=make_pair(result,weight[i]);
        mp[weight[i]]=profit[i];

    }

    sort(object.begin(),object.end());
    cout<<"ppw "<<" : "<<"weight"<<endl;
    for(auto i: object)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    float Count=0; float sum=0;
    for(auto i:object)
    {

        int add=i.second;
        if((Count+add)>=15 )
        {
            float sub=15-Count;
            float a;
            a=i.first;
            sum=sum+(a*sub);


        }
        Count=Count+add;

        sum=sum+mp[add];

    }

    cout<<"MAX Profit can be: "<<sum;

}

