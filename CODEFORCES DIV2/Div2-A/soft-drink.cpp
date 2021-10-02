#include <iostream>
using namespace std;
int n, a, b;
int main() {
    int n,k,l,c,d,p,nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int liquid = (k*l)/nl;
    int limes = c*d;
    int salt = p/np;

   
    int minElement = min(liquid,min(limes,salt));

    int res = minElement/n;
    cout<<res;
}