#include<iostream>
using namespace std;
#include<stack>

int main()
{  int n,k=0;
int value=-1;
cin>>n;
    int a[n],a2[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    stack<int> mystack;
    for(int i=0;i<n;i++)
    {  int j;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                mystack.push(a[j]);
                a2[k]=mystack.top();
                k++;
                break;
            }

        }
          if(a[j]<a[i])
            {mystack.push(0);
            a2[k]=mystack.top();
            k++;}

    }


    for(int i=0;i<n;i++)
    {
        cout<<a2[i];
    }
}
