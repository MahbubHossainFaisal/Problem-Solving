/*fully opposite from the tail recursion.
The function won't to do any work while the recursion is calling.It will work
during the returning time of the recursion because all the statements are bellow the
recursion call. */


#include <iostream>
using namespace std;

void Rec(int n)
{
    if(n>0)
    {


        Rec(n-1);
        cout<<n<<endl; //print will be done in returning time
    }

}

int main()
{

    int n;
    cin>>n;
    Rec(n);
}

