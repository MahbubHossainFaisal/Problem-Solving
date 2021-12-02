#include <bits/stdc++.h>
using namespace std;

void printAsc(int n){
    //base case
    if(n==0) return;

    //hypothesis
    printAsc(n-1);

    //answer
    cout<<n<<" ";

}

void printDesc(int n){
    //base case
    if(n==0) return;

    //answer
    cout<<n<<" ";

    //hypothesis
    printDesc(n-1);

    

}


int main()
{

    int n;
    cin>>n;
    printAsc(n);
    cout<<endl;
    printDesc(n);

    return 0;

}