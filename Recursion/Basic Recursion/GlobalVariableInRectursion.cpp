#include<iostream>
using namespace std;
int n=0;
//Difference between global and static variable is global variable can be used by any functions
//but static variable cannot be used by any other function
int StaticFunction(int r)
{

    if(r>0)
    {
        n++;
        cout<<n<<endl;//checking how the n value is increasing
        return StaticFunction(r-1)+n;
    }
    return 0;
}

int main(){
int r;
r=5;
int x=StaticFunction(r);
cout<<"value of n after calling the function for first time "<<n<<endl;
cout<<x<<endl;
int y=StaticFunction(r);
cout<<"value of n after calling the function for second time "<<n<<endl;
cout<<y;
return 0;
}
