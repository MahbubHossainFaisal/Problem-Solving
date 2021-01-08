#include <bits/stdc++.h>
using namespace std;


void numbers(int n)
{
    if(n>1)
    numbers(n-1);
    cout<<n<<endl;

}

int main()
{
    int n;
    cin>>n;
    numbers(n);
}
