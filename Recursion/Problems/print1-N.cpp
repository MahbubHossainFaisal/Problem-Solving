
#include<bits/stdc++.h>
using namespace std;


int print(long long int n)
{
    if(n>0){

        print(n-1);
         cout<<n<<" "; //can print max 10^5
    }
}

int main()
{
   long long int n;
    cin>>n;
    print(n);

}
