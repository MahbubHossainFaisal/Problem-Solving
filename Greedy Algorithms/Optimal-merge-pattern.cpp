/* My approach but wrong */
#include <bits/stdc++.h>
using namespace std;

void optimalMergePattern(int arr[])
{
    vector <int> res;
    int sum=0,i,j=0;

    sum=sum+arr[0]+arr[1];
    res.push_back(sum);

    for(i=2;i<6;i++)
    {
        if(res[j]+arr[i]<=arr[i]+arr[i+1])
        {
            res.push_back(res[j]+arr[i]);

            j++;
            sum=sum+res[j]+arr[i];
        }

        else {
            sum=sum+arr[i]+arr[i+1];
            res.push_back(arr[i]+arr[i+1]);
            i++;

        }

    }

    int Size=res.size();
    for(i=j;i<res.size();i++)
    {
        if(res[i+1]==res.size()) break;
        res.push_back(res[i]+res[i+1]);
        i++;

    }

    int Count =0;
    for(i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }

    cout<<Count<<endl;
}

int main()
{
    int arr[] = {5,2,3,4,7,6,100000};

    sort(arr,arr+7);

    optimalMergePattern(arr);

}
