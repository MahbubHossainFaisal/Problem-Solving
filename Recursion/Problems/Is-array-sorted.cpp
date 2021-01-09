
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int a[],int sz)
{
    if(sz==0 || sz==1)
    {
        return true;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    bool smallerInput=(a+1,sz-1);
    return smallerInput;
}


int main()
{
    int a[5] ={2,3,1,5,6};

    cout<<isSorted(a,5)<<endl;
    return 0;
}
