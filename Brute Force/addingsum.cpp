include<iostream>
using namespace std;

int main()
{
    int n,x;
    int sum=0;
    cin>>n;
    while(n>10)
    {
        n=n/10;
        x=n%10;
        sum=sum+x;
    }
    cout<<sum<<endl;
}
