
// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int doUnion(int *, int , int *, int);

int main() {

	int t;
	cin >> t;

	while(t--){

	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];

	    for(int i = 0;i<n;i++)
	       cin >> a[i];

	    for(int i = 0;i<m;i++)
	       cin >> b[i];

	    cout << doUnion(a, n, b, m) << endl;

	}

	return 0;
}// } Driver Code Ends


//User function template in C++

// a and b : given array with n and m size respectively

int doUnion(int a[], int n, int b[], int m)  {
    //code here
    int aMax= *max_element(a,a+n);
    int bMax= *max_element(b,b+m);
    int sz;
    if(aMax>bMax){
        sz=aMax;
    } else{
        sz=bMax;
    }
    sz++;
    int *cnt= new int[sz];
    for(int i=0;i<sz;i++)
    {
        cnt[i]=0;
    }


    for(int i=0;i<n;i++)
    {
        cnt[a[i]]++;
    }

    for(int i=0;i<m;i++)
    {
        cnt[b[i]]++;
    }
    int Count=0;

    for(int i=0;i<sz;i++)
    {
        if(cnt[i]>0)
        {
            Count++;
        }
    }
    return Count;

}
