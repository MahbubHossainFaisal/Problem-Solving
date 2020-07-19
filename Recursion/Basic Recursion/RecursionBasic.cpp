#include<iostream>
using namespace std;

void showSerial(int x)
{

    if(x>0)
    {
        showSerial(x-1);
    cout<<x<<" ";
    }

}

void showReverse(int x)
{
        if(x>0)
        {
        cout<<x<<" ";
        showReverse(x-1);
        }


}

int main()
{
    int x;
    cin>>x;

    showSerial(x);
    cout<<endl;
    showReverse(x);

}
