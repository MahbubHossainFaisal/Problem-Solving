
/*

Objects(x): 1  2   3   4   5   6   7
profit(p) : 10 5   15  7   6   18  3
weight(w) : 2  3   5   7   1   4   1

A bag can take weight of 15 kg only.
Goal is to insert weight into the bag from the given objects which will bring the max profit

constraint: summation of  XiWi<=15 and Objective: max profit(XiPi)

So basically main concept is
we will take a pair of  vector ,then we will push the profit and weight as pairs in the vector
then we will sort the vector by profit per weight
then we will store weights in the bag and also count the profits for those weights till bag's current weight + next weight is <= bag's weight capacity
then if there remains more weight to store in the bag then we will multiply that weight with profit per weight .The bag will become full and
we will get the maximum profit .

*/


#include<bits/stdc++.h>
using namespace std;

bool compare(const pair<int,int> &a, const pair<int,int> &b)
{
    double x =(double)a.first/(double)a.second;
    double y =(double)b.first/(double)b.second;

    return x>y;
}


int main()
{
    vector<pair<int,int>> object;
    int profit[]={10,5,15,7,6,18,3};
    int weight[]={2,3,5,7,1,4,1};

    for(int i=0;i<7;i++)
    {
        object.push_back(make_pair(profit[i],weight[i]));
    }
    sort(object.begin(),object.end(),compare);
    cout<<"After sorting: "<<endl<<"Profit "<<" "<<"Weight"<<endl;
    for(auto i: object)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    int bag_weight=15;
    int sum=0;
    double add=0.0;

    for(int i=0;i<7;i++)
    {
        if(sum+object[i].second<=15)
        {
            sum=sum+object[i].second;
            cout<<"Bag weight: "<<sum<<endl;

            add=add+object[i].first;
            cout<<"Profit becomes: "<<add<<endl;
        }
        else
        {
            int rest=15-sum;
            cout<<"Remaining weight: "<<rest<<endl;
            add=add+((double)rest*((double)object[i].first)/(double)object[i].second);
            cout<<"Profit becomes: "<<add<<endl;
            break;
        }
    }

    cout<<"Maximum profit: "<<add<<endl;
}
