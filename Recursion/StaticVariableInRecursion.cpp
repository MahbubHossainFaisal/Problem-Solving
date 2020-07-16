#include <iostream>
using namespace std;
//Static variable never changes after the function ends.
//It holds the value it gained from the function.
//But you can't access this variable in other functions.
int StaticFunction(int r)
{
     static int n=0;
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
cout<<x<<endl;
int y=StaticFunction(r);

cout<<y;
return 0;
}
