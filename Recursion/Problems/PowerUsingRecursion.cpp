
#include <bits/stdc++.h>
using namespace std;

int power(int n,int x)
{
    if(x==1)
        return n;
    int smallerInput=power(n,x-1);
    return n*smallerInput;
}

int main()
{
    int n,x;
    cin>>n>>x;
   cout<< power(n,x);
   return 0;

}
