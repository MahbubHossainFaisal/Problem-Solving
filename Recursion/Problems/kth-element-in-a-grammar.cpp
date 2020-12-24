//Find k th element in a grammar
/*
A row number and a column number is given .
The grammar is like this . It's first row is start with 0 then next row becomes 0 1
0
0 1
0 1 1 0
0 1 1 0 1 0 0 1
0 1 1 0 1 0 0 1 1 0 0 1 0 1 1 0
0 1 1 0 1 0 0 1 1 0 0 1 0 1 1 0 1 0 0 1 0 1 1 0 0 1 1 0 1 0 0 1

Like this.
I have to find the kth element which is denoting some specific colummn element,for example N=3,k=4 so, ans will be 0
cz 3rd row and 4th column element is 0

*/


#include <bits/stdc++.h>

using namespace std;

int solve(int n,int k)
{
    if(n==1 && k==1){
        return 0;
    }
    int length=pow(2,n-1);
    int mid =length/2;
    if(k<=mid){
        return solve(n-1,k);
    }
    else {
        return !solve(n-1,k-mid);
    }
}

int main()
{
    int n,k;

    cin>>n>>k;

    cout<<solve(n,k);

}
