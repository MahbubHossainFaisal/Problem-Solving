#include<iostream>
using namespace std;


int B(int b){

    if(b==0)
    {
        return 1;
    }
    else
    {
        return B(b-1)*b;
    }

}

int main()
{
int a,b;
cin>>a>>b;

int R1,R2;

//R1=A(a);
if(b<a)
R2=B(b);
else
R2=B(a);
//cout<<R1<<" "<<R2<<endl;

cout<<R2;

}
