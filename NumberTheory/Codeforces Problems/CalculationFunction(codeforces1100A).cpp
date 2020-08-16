#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, sum = 0, i;
    cin >> n;
    if (n % 2 == 0)
    {
        sum = n / 2;
    }
    else
    {
        sum = ((n - 1) / 2) - n;
    }

    cout << sum;
}
