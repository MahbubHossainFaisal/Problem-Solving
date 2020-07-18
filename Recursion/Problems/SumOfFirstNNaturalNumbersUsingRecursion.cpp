/* Natural Numbers Starts from 1 onwards.
Sum of N natural numbers can be found by a formula which is n*(n+1)/2;
To use recursion is also can be an option.
*/

#include <iostream>
using namespace std;

int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return Sum(n-1)+n;
    }
}

int main()
{
    int n;
    cin>>n;
    int result=Sum(n);
    cout<<result;
    return 0;

}
