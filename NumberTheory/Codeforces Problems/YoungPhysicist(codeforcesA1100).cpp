#include<bits/stdc++.h>

using namespace std;


int main()
{
    /*Three vectors are at equilibrium when the results of those
three vectors is a Null vector, i.e. it has no magnitude and direction.
Resultant of three vectors is equal to the vector sum of the vectors.
The resultant vector is Null when, ∑x = 0, ∑y = 0 and ∑ z = 0.
Thus we can say that when the said condition satisfies then the vectors are at equilibrium and otherwise not. */

    int n;
    cin>>n;

    int *a=new int[n*3];
        for(int i=0;i<n*3;i++)
        {
            cin>>a[i];
        }
       int x=0;
       int y=0;
       int z=0;
        for(int i=0;i<n*3;i+=3)
        {
            x=x+a[i];
        }
        for(int i=1;i<n*3;i+=3)
        {
            y=y+a[i];
        }
        for(int i=2;i<n*3;i+=3)
        {
            z=z+a[i];
        }

        if(x==0 && y==0 && z==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

