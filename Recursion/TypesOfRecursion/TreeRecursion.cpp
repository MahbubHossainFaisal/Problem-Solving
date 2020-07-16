/*If a function call itself for one time then it will be "Linear Recursion"
and if a function call it self more than one time then it will be a "Tree Recursion"
*/

#include <iostream>
using namespace std;

void Rec(int n)
{
    if(n>0)
    {

        cout<<n<<endl; //print will be done in returning time
        Rec(n-1);
        Rec(n-1);
    }

}

int main()
{

    int n;
    cin>>n;
    Rec(n);
}

