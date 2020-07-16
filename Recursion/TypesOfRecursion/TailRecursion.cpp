/*In this type the recursion will be used in the end of the function
so,There will be work in every calling time.There will be no work in the
returning time as after the call of a recursion there is no statement left after it. */
//in case of using tail recursion ,It is better to use loop instead.
#include <iostream>
using namespace std;

void Rec(int n)
{
    if(n>0)
    {

        cout<<n<<endl;//Print will be done in calling time.
        Rec(n-1);
    }

}

int main()
{

    int n;
    cin>>n;
    Rec(n);
}
