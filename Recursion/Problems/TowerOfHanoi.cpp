#include<iostream>
using namespace std;

void TowerOfHanoi(int n,int a,int b,int c)
{
    if(n>0)
    {
        TowerOfHanoi(n-1,a,c,b);
        cout<<"("<<a<<","<<c<<")"<<endl;
        TowerOfHanoi(n-1,b,a,c);
    }
}


int main()

{   cout<<"Tower Of Hanoi"<<endl;
    cout<<"Enter the number of disk to transfer from A to C:";
     int n;
    cin>>n;
    TowerOfHanoi(n,1,2,3);
}
